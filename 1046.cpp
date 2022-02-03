#include<iostream>
using namespace std;
int main(void)
{
    int i,j ,s=0,s1=0,x,y,sum;
    cin>> x>> y;
    if(x==y)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }

    else if(x>y)
    {

        for(i=x;i<24;i++)
        {

            s1++;
        }
        for(j=0;j<y;j++)
        {

            s++;

        }

          sum=s1+s;

      cout<<"O JOGO DUROU "<<sum<<" HORA(S)"<<endl;
    }
    else
    {
        sum=y-x;
         cout<<"O JOGO DUROU "<<sum<<" HORA(S)"<<endl;
    }

}

