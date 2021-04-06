#include <iostream>
#include<unistd.h>
#include<time.h>
#include "DummyQuestion.h"
#include <termios.h>


using namespace std;

class QsnSets{

    private:
        int current =0;
        list<Question> qsn;
        list<Question>::iterator it;
        char input ;
        string here;
        int amount;
        bool used = false;
        int enter;
        string name;

     public:

            QsnSets()
              {
                 DummyQuestion dummy;
                 qsn = dummy.getData();
                 it = qsn.begin();
              }


       void next()
             {

                    it = qsn.begin();
                    advance(it, current);
                    current++;
                    printQsn(*it);



             }

             char getch(void)
                {
                    char buf = 0;
                    struct termios old = {0};
                    fflush(stdout);
                    if(tcgetattr(0, &old) < 0)
                        perror("tcsetattr()");
                    old.c_lflag &= ~ICANON;
                    old.c_lflag &= ~ECHO;
                    old.c_cc[VMIN] = 1;
                    old.c_cc[VTIME] = 0;
                    if(tcsetattr(0, TCSANOW, &old) < 0)
                        perror("tcsetattr ICANON");
                    if(read(0, &buf, 1) < 0)
                        perror("read()");
                    old.c_lflag |= ICANON;
                    old.c_lflag |= ECHO;
                    if(tcsetattr(0, TCSADRAIN, &old) < 0)
                        perror("tcsetattr ~ICANON");
                    printf("%c\n", buf);
                    return buf;
                 }


          string getAnswer()
            {
                std::string answer;
                std::cin >> answer;
                return answer;
            }


                          void printQsn(Question temp )
                          {
                             temp.displayQsn(current);
                              while(true)
                              {
                                    cin>>input;
                                    if(checkValidKey(input))
                                    {
                                    //2. check if the L is Pressed.
                                     //else check the result


                                     if(toupper(input) == 'L'){


                                    if(used!= true)
                                    {
                                    used = true;
                                       system("clear");

                                        temp.displayHelp(current);


                                    }else{

                                                               cout<<"Sorry No Life Line........";

                                    }

                                     }else{

                                       if( toupper(temp.getAnswer())==toupper(input))
                                            {




                                                cout<<"Congrats!!! you have scored\t"<<(current)* current*1000<<"\n\n"<<endl;


                                             }
                                        else
                                        {
                                             cout<<"Oops!!! It's wrong\n";
                                        }



                                        char nextpage;
                                        std::cout<<"Press enter to continue."<<endl;
                                        getch();

                                        break;
                                     }


                                        //std::cin>>nextpage;

                                  }else{
                                           temp.displayQsn(current);
                                           cout<<"Invalid Key Pressed:";
                                     }

                               }

                               if(current <20){
                                    next();
                                }
                               else{
                                   system("clear");
                                  cout<<"\n\n\n\t\tCongratulations..!"<<name<<" Your score is"<<(current)*current *1000<<endl;
                                  exit(0);
                               }


                    }

                    bool checkValidKey(char key)
                      {
                        if(toupper(key)== 'A'|| toupper(key) == 'B'|| toupper(key) == 'C' || toupper(key)== 'D'|| toupper(key)== 'L')
                          {
                            return true;
                          }
                           return false;
                      }

};


