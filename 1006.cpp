#include<iostream>
#include<cstdio>
using namespace std ;

int main(void){

    double A,B,C,MEDIA;
    cin>>A>>B>>C;
    A=A*2;
    B=B*3;
    C=C*5;
    MEDIA = (A+B+C)/10;
   // cout<< fixed<<setprecision(2);
     //cout<< "MEDIA = "<<MEDIA<<endl;
     printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}


