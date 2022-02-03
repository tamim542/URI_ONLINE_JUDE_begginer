
#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
 {
     float a,b,c,area,x;
     cin>>a>>b>>c;
     if(a+b>c && a+c>b && b+c>a)
     {

         x=a+b+c;
         cout<<fixed<<setprecision(1)<<"Perimetro = "<<x<<endl;
     }

        else{
                area=((a+b)*c)/2;
        cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;

     }



     return 0;
 }

