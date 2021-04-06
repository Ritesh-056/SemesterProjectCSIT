#include <iostream>
#include<unistd.h>
//#include <thread>

using namespace std;

class Question{

    private:
    string value;
    string opA;
    string opB;
    string opC;
    string opD;
    char result;
    char given;


    public:
    char getAnswer()
    {
        return result;
    }

    void setValue(string val, string op1, string op2, string op3, string op4, char rslt)
    {
        value = val;
        opA = op1;
        opB = op2;
        opC = op3;
        opD = op4;
        result = rslt;
    }


 /*
       void time()
        {
           system("clear");
               if(toupper(given)=='C')
               {
                       for(int i=1;i<=30;i++)
                       {
                          system("clear");
                          cout<<"Time:"<<i<<"s"<<endl;
                          sleep(1);
                       }
                }
        }

        */

    void displayQsn(int current)
    {
        system("clear");

        cout<<"\n\n\n\n\t\t\t"<< current<<". "<< value <<"\n"<<endl;
        cout<<"\n\n\t\t\ta. "<< opA<<"\t\t\t\tb. "<<opB<<"\n\n\t\t\tc. "<<opC<<"\t\t\t\td." <<opD<<endl;
        cout<<"\n\n\n\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
        cout<<"\n\n\t\t\t\tSelect your answer\t\t\t";



    }

/*
    int roll(int min, int max)
{

   double x = rand()/static_cast<double>(RAND_MAX+1);
   int that = min + static_cast<int>( x * (max - min) );

   return that;
}

*/

    void displayHelp(int current){

        int count = 0;

        char one= ' ';

        char arr[] = { 'A','B','C','D'};


        while(count<2)
        {

            int random;


            random = rand()%4;

            char current = arr[random];

            if(current != result && current != one ){


                if(current == 'A'){

                    opA = "*****";

                }else if(current == 'B'){
                                    opB= "*****";


                }else if(current == 'C'){
                                    opC= "*****";


                }else if(current == 'D'){

                                    opD = "*****";

                }

                if(count==0)
                {
                   one = current;
                }

            count++;
            }
        }
        cout<<"\n\n\n\n\t\t\t"<< current<<". "<< value <<"\n\n"<<endl;
        cout<<"\n\n\t\t\ta. "<< opA<<"\t\t\t\tb. "<< opB<<"\n\n\t\t\tc. "<<opC<<"\t\t\t\td." <<opD<<endl;
        cout<<"\n\t\t\t\tSelect your answer\t\t\t\n\n";
    }



};
