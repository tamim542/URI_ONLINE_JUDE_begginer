#include<iostream>
#include<iomanip>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    float N;
    int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12;
    float m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11;
    cin>>N;
    if (N>=0 && N <= 1000000.00)
    {
      r1=N/100;
    m1 =fmod(N,100);
    r2=m1/50;
    m2=fmod(m1,50);
    r3=m2/20;
    m3=fmod(m2,20);
    r4=m3/10;
    m4=fmod(m3,10);
    r5=m4/5;
    m5=fmod(m4,5);
    r6=m5/2;
    m6=fmod(m5,2);
    r7=m6/1;
    m7 =fmod(m6,1);
    r8=m7/.5;
    m8=fmod(m7, .5);
    r9=m8/.25;
    m9=fmod(m8,.25);
    r10=m9/.10;
    m10=fmod(m9,0.10);
    r11=m10/.05;
    m11=fmod(m10,.05);
   r12=m11/.01;
    }
     cout<<"NOTAS:"<<endl;
    cout<<fixed<<setprecision(2)<<r1<<" nota(s) de R$ 100.00"<<endl;
     cout<<fixed<<setprecision(2)<<r2<<" nota(s) de R$ 50.00"<<endl;
      cout<<fixed<<setprecision(2)<<r3<<" nota(s) de R$ 20.00"<<endl;
       cout<<fixed<<setprecision(2)<<r4<<" nota(s) de R$ 10.00"<<endl;
        cout<<fixed<<setprecision(2)<<r5<<" nota(s) de R$ 5.00"<<endl;
         cout<<fixed<<setprecision(2)<<r6<<" nota(s) de R$ 2.00"<<endl;
           cout<<"MOEDAS:"<<endl;
           cout<<fixed<<setprecision(2)<<r7<<" moeda(s) de R$ 1.00"<<endl;
           cout<<fixed<<setprecision(2)<<r8<<" moeda(s) de R$ 0.50"<<endl;
           cout<<fixed<<setprecision(2)<<r9<<" moeda(s) de R$ 0.25"<<endl;
           cout<<fixed<<setprecision(2)<<r10<<" moeda(s) de R$ 0.10"<<endl;
           cout<<fixed<<setprecision(2)<<r11<<" moeda(s) de R$ 0.05"<<endl;
           cout<<fixed<<setprecision(2)<<r12<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
