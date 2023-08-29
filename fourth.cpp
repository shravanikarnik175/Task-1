#include<iostream>
#include<string>
using namespace std;
int main()
    {
      char text[80];
      cout<<"Enter your text";
     cin.getline(text,80);
      int i,count=1;
      for(i=0;i<=80;i++)
        {
          if(text[i]==' ')
          {
            if(text[i+1]!= ' ')
            {
              count++;
            }
          }
        }
        cout<<"\n Number of words="<<count;
        return 0;
    }