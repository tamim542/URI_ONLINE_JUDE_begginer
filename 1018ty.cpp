
#include<iostream>
using namespace std;

int main(void)
{
    int N,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7,r8,r9,m1,m2,m3,m4,m5,m6,m7,m8,m9;
    cin>>N;
    if(N>0 && N<1000000)
    {
        if(N>100)
        {
            r1=N/100;
            m1=N%100;
            r=100-m1;
            if(r>=50)
            {
                r2=r/50;
                m2=r%50;
            }
            if(m1<50 && m1>=20)
            {
                r3=m1/20;
                m3=m2%20;
            }
            if(m1>=5 && m1<20)
            {
                r4=m3/5;
                m4=m3%5;
            }
            if(m1>=2 && m1<5)
            {
                r5=m4/2;
                m5=m4%2;
            }
            if(m1>=1 && m1<2)
            {
                r6=m5/1;
            }

            cout<<r1<<" nota(s) de R$ 100,00"<<endl;
            cout<<r2<<" nota(s) de R$ 50,00"<<endl;
            cout<<r3<<" nota(s) de R$ 20,00"<<endl;
            cout<<r4<<" nota(s) de R$ 5,00"<<endl;
            cout<<r5<<" nota(s) de R$ 2,00"<<endl;
            cout<<r6<<" nota(s) de R$ 1,00"<<endl;
        }
    }
    return 0;
}

