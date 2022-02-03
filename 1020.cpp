#include<iostream>
using namespace std;

int main(void)
{
    int N,r1,r2,m1,m2;
    cin>>N;
       r1=N/365;
       m1=N-r1*365;
       r2=m1/30;
       m2=m1-r2*30;


            cout<<r1<<" ano(s)"<<endl;
            cout<<r2<<" mes(es)"<<endl;
            cout<<m2<<" dia(s)"<<endl;



     return 0;
    }



