#include<iostream>
using namespace std;
int main(void)

    {
      int n,i;
      cin>>n;
      for(i=0;i<10000;i++)
      {
          if(i%n==2)
          {
              cout<<i<<endl;
          }
      }
    }
