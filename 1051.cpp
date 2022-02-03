#include<iostream>
#include<iomanip>
using namespace std;
int main(void)

    {
        float a,b,c;

        cin>>a;

        if(a<=2000.00)
           {
               cout<<"Isento"<<endl;
           }

           if(a>=2000.01 && a<=3000.00)
           {
               b=a-2000;
               c=b*0.08;
               cout<<fixed<<setprecision(2)<<"R$ "<<c<<endl;
           }

           if(a>=3000.01 && a<=4500.00)
           {
               b=a-3000;
               c=b*0.18+80;
               cout<<fixed<<setprecision(2)<<"R$ "<<c<<endl;
           }

           if(a>4500.00)
           {
               b=a-4500;
               c=b*0.28+350;
               cout<<fixed<<setprecision(2)<<"R$ "<<c<<endl;
           }

     return 0;
    }
