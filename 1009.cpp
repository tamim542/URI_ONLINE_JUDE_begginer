#include<iostream>
#include <iomanip>
#include<cstdio>
using namespace std ;

int main(void){

     string name;
    double A,B;
    double total ;
    //cout<<"enter the name"<<endl;
    cin>>name;
   // cout<<"enter the value"<<endl;
    cin>>A>>B;
    total= A+(B*15)/100;
    cout<<fixed<<setprecision(2);
    cout<<"TOTAL = R$ "<<total<<endl;
    return 0;
}


