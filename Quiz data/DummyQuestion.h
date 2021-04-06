#include <iostream>
#include <list>
#include <algorithm>
#include <random>
#include <functional>
#include <string>
using namespace std;


 class DummyQuestion{

    private:
          int enter;
          char given;
          string name;


     public:
          void displayoptn()
           {
                              system("clear");
						      cout<<"\n\n\n\n\t\t***********************************************************"<<endl;
                              cout<<"\n\n\t\t\t\t\tWELCOME TO KBC QUIZ"<<endl;
						      cout<<"\n\t\t***********************************************************"<<endl;
						      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t------------------------------------------"<<endl;
						      cout<<"\n\n\n\t\t\t\t1. Play"<<endl;
						      cout<<"\n\t\t\t\t2. Quit "<<endl;
						      cout<<"\n\n\n\t\t\t------------------------------------------\n\n\n\n"<<endl;
						      cout<<"\t\tSelect the number you want to perform as seen in  the list\t";
						      cin>>enter;

						    if(enter==2)
						      {
						       cout<<"\n\n\n\t\tThank you for joining us.\n\n\n";
						       exit(0);
						      }

           }

         void loading()
         {
            system("clear");
            cout<<"\n\n\n\t\tEnter your name:\t";
            cin>>name;
            for (int i=5;i>=1;i--)
            {
              system("clear");
              cout<<"\n\n\n\n\n\n\n\n\t\tLoading:"<<i<<"s"<<endl;
              sleep(1);
            }
         }


template < typename T > void shuffle( std::list<T>& lst )
{
    std::vector< std::reference_wrapper< const T > > vec( lst.begin(), lst.end() ) ;

    std::shuffle( vec.begin(), vec.end(), std::mt19937{ std::random_device{}() } ) ;

    std::list<T> shuffled_list {  vec.begin(), vec.end() } ;

    lst.swap(shuffled_list) ;
}

   list<Question> getData()
    {

        list <Question> temps;
        displayoptn();
       loading();
        Question q1;
        q1.setValue("Which  is the oldest religion of our  country ?", "Christanity", "Hinduism", "Buddhism", "Islam", 'B');
        temps.push_back(q1);


        Question q2;
        q2.setValue("What % of the earth's surface is covered by water?", "91%", "71%", "61%", "91%", 'B');
        temps.push_back(q2);

        Question q3;
        q3.setValue(" Which is the second Largest country in the world? (by land )", "Russia", "China", "Canada", "Japan",'C');
        temps.push_back(q3);

        Question q4;
        q4.setValue("How many sides does heptagon have?","11","7","5","8",'B');
        temps.push_back(q4);


        Question q5;
        q5.setValue(" What is the average numbers of teeth in a normal adult male ?(exculding wisdom teeth)","32","36","40","38",'A');
        temps.push_back(q5);



        Question q6;
        q6.setValue(" ................., the country with highest population.","India","China","England","Japan",'B');
        temps.push_back(q6);


        Question q7;
        q7.setValue("Which place is the gateway  to  Mt.Everest ?","Mustang","Bandipur","Namchebazar","Srinagar",'C');
        temps.push_back(q7);


        Question q8;
        q8.setValue("What is the total area of Nepal?","1,57,187 sq.km","1,47,181 sq.km"," 1,23,187  sq.km","1,97,111 sq.km",'B');
        temps.push_back(q8);



        Question q9;
        q9.setValue(" Which first electrical item did Thomas Edison invent?","Iron","Television","Radio","Lightbulb",'D');
        temps.push_back(q9);


        Question q10;
        q10.setValue("During which year did World War I begin?","1940 A.D","1914 A.D","1918 A.D","1920 A.D",'B');
        temps.push_back(q10);


        Question q11;
        q11.setValue(" Which instrument is used for measuring wind speed?","Galvanometer","Speedometer","Anemometer","Ammeter",'C');
        temps.push_back(q11);


        Question q12;
        q12.setValue("How many players are there in an ice hockey team?","Six","Seven","Nine","Ten",'B');
        temps.push_back(q12);


        Question q13;
        q13.setValue("How many oscars did the Titanic movie got?","Eight","Seven","Eleven","Ten",'C');
        temps.push_back(q13);


        Question q14;
        q13.setValue("In which sport can you win the Davis Cup?","Football","Cricket","Basketball","Tennis",'D');
        temps.push_back(q14);


        Question q15;
        q15.setValue("H2O is the chemical formula for what?","Glycerine","Water"," Hydrogen","Oxygen",'B');
        temps.push_back(q15);


        Question q16;
        q16.setValue("Which joint connects the foot to the leg?","Ankle","Pivot","Hinge ","Saddle",	'A');
        temps.push_back(q16);


        Question q17;
        q17.setValue(" Which place in Nepal is  also called switzerland?","Srinagar"," Jiri(Dolakha)","Bandipur ","Mustang",'B');
        temps.push_back(q17);


        Question q18;
        q18.setValue(" When was the constitution of Nepal introduced?","2 Jestha,2072","1 Baisakh,2072"," 3 Ashoj,2072","3 Kartik,2072",'C');
        temps.push_back(q18);


        Question q19;
        q19.setValue("Name the country where there no mosquitoes are found?","Japan ","Argentina","Italy","France",'D');
        temps.push_back(q19);

        Question q20;
        q20.setValue("Which is the smallest  district in our country?","Jhapa","Morang","Bhaktapur","Kathmandu",'C');
        temps.push_back(q20);

        shuffle(temps) ;


        return temps;

    }


};
