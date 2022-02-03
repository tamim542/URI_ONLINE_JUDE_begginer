#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
 float a,x,y;
    cin>>a;
    if(a>=0 && a<=400.00)
    {
        x=a*(15.0/100);
        y=x+a;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<y<<endl;
         cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<x<<endl;
         cout<<"Em percentual: 15 %"<<endl;
    }

    if(a>=400.01 && a<=800.00)
    {
        x=a*(12.0/100);
        y=x+a;
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<y<<endl;
         cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<x<<endl;
         cout<<"Em percentual: 12 %"<<endl;

        }


        if(a>=600.01 && a<=1200.00)
    {
        x=a*(10.0/100);
        y=x+a;
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<y<<endl;
         cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<x<<endl;
         cout<<"Em percentual: 10 %"<<endl;

        }

        if(a>=1200.01 && a<=2000.00)
    {
        x=a*(7.0/100);
        y=x+a;
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<y<<endl;
         cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<x<<endl;
         cout<<"Em percentual: 7 %"<<endl;

        }

        if(a>2000.00)
    {
        x=a*(4.0/100);
        y=x+a;
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<y<<endl;
         cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<x<<endl;
         cout<<"Em percentual: 4 %"<<endl;

        }
        return 0;
}

