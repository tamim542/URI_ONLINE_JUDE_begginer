#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
  double A,B,C,pi=3.14159;
 double result1,result2,result3,result4,result5;
    cin>>A>>B>>C;
    result1=.5*A*C;
    result2= pi*C*C;
    result3=(A+B)*.5*C;
    result4=B*B;
    result5=A*B;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<result1<<endl;
     cout<<"CIRCULO: "<<fixed<<setprecision(3)<<result2<<endl;
      cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<result3<<endl;
       cout<<"QUADRADO: "<<fixed<<setprecision(3)<<result4<<endl;
        cout<<"RETANGULO: "<<fixed<<setprecision(3)<<result5<<endl;
    return 0;
}



