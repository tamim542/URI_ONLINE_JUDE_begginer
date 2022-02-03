#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    float avg,x,y=0;
    int i,j=0,k;

    for(i=1;;i++)
    {
        cin>>x;
        if(x<0 || x>10)
        {
            cout<<"nota invalida"<<endl;
        }
        if(x>=0 && x<=10 )
            {
             y =x+y;
         j++;
            }
             if(j==2)
             {
        avg=(float)y/2.0;
        cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
        break;
             }

  }
}
