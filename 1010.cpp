#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int a1 ,b1,a2,b2;
    float c1,c2,result;
   // cout<<"enter the first row"<<endl;
    cin>>a1>>b1>>c1;
    //cout<<"enter the second row"<<endl;
    cin>>a2>>b2>>c2;
    result=(b1*c1) + (b2*c2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<result<<endl;
}

