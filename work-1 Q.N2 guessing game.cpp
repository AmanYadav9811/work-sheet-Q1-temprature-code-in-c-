#include<iostream>
#include<cstd lib>
#include<ctime>
using namespace std;
int main()
{
    int difficulty;
    int randomnumber;
    int userguess;
    int attempt=0;

     cout<<"Number Guessing Game"<<endl;
     cout<<"choose a difficult level"<<endl;
     cout<<"1. easy(1-8)"<<endl;
     cout<<"2.medium(1-30)"<<endl;
     cout<<"3.hard(1-50)"<<endl;
     cout<<"enter your choice(1,2 or 3)"<<endl;
     cin>>difficulty;


     srand(time(0));

     if difficulty==1
     {

         randomnumber = rand()%8+1;

     }
     else if (difficulty ==2)
     {

         randomnumber =rand()%30+1;

     }
     else if (difficulty ==2)
     {

         randomnumber =rand()%50+1;
         }
         else
         {

             cout<<"invalid choice please run the program again and choice 1,2 or 3"<<endl;

             return 0;
         }
         cout<<" i have picked a number can you guess it?"<<endl;

         while(true)
         {

             cout<<"enter your guess"<<endl;
             cin>> user guess;
             attempt ++;
             if (user guess==randomnumber)

             {
                 cout<<"congrats you guessed the correct number in"<<attempt<<attempt"<< endl;
                 break;
             }
             else if (userguess<randomnumber)
         }
         {
             cout<<"to low try again"<<endl;

         }
         else
         {
             cout<<"to high try again"<<endl;
         }
         return 0;
}


