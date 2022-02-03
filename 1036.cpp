#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(void)
{

    float x1,x2,x3,x4,x5,x6,a,b,c;
    cin>>a>>b>>c;
    x1=b*b - (4*a*c);
    if(a==0 || x1<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
    x2=sqrt(x1);
    x3= - b + x2;
    x4= x3/(2*a);
    x5 = - b - x2;
    x6= x5/(2*a);
     cout<<fixed<<setprecision(5)<<"R1 = "<<x4<<endl;
    cout<<fixed<<setprecision(5)<<"R2 = "<<x6<<endl;
    }
    return 0;
}
