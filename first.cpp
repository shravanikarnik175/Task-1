#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
  {
    srand(time(0));
    int number=(rand()%2000)+1;
    int guess=0;
    
    do
    {
        cout<<"Enter your guess=";
        cin>>guess;
        
      if(guess>number)
        cout<<"Too high !!!"<<endl;
      else if(guess<number)
        cout<<"Too low !!!"<<endl;
      else
        cout<<"Yeah..You Won !!!"<<endl;

    } while (guess!=number);


      return 0;

    
  }
