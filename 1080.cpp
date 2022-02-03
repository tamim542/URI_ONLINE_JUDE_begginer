#include<iostream>
using namespace std;
int main(void)

    {
     int a[100],n,i,max,c;

     for(i=0;i<100;i++)
     {
         cin>>a[i];
     }
     max=a[0];
     c=1;
     for(i=1;i<100;i++)
     {

        if(a[i]>max)
     {
         max=a[i];
         c=i+1;
     }
     }
     cout<<max<<endl<<c<<endl;
     return 0;
    }
