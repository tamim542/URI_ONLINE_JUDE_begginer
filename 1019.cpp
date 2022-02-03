#include<iostream>
using namespace std;

int main(void)
{
    int N,r1,r2,m1,m2;
    cin>>N;
       r1=N/3600;
       m1=N-r1*3600;
       r2=m1/60;
       m2=m1-r2*60;


            cout<<r1<<":"<<r2<<":"<<m2<<endl;



     return 0;
    }



