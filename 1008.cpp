#include<iostream>
#include <iomanip>
#include<cstdio>
using namespace std ;

int main(void){

    double salary,hours,work;
    int NUMBER;
    cin>>NUMBER>>hours>>work;
    salary=hours*work;
   // cout<< fixed<<setprecision(2);
     //cout<< "MEDIA = "<<MEDIA<<endl;
    // printf("MEDIA = %.1lf\n",MEDIA);
    cout<<"NUMBER = "<<NUMBER<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
}




