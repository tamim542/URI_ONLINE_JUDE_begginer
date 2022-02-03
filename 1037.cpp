#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
  float x;

    cin>>x;


       if(x>=0.0000 && x<=25.0000)
       {
             cout<<"Intervalo [0,25]"<<endl;
       }

       if(x>=25.00001 && x<=50.0000)
                {

             cout<<"Intervalo (25,50]"<<endl;
       }

       if(x>=50.00001 && x<=75.0000)
       {

             cout<<"Intervalo (50,75]"<<endl;
       }

       if(x>75.00001 && x<=100.0000)
                  {

             cout<<"Intervalo (75,100]"<<endl;
       }
    if(x<0 || x>100.0000)
        {
       cout<<"Fora de intervalo"<<endl;
   }

    return 0;
}
