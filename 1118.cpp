#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    float avg,avg1,w=0,x,z,r[2],y=0;
    int i,j=0,k=0;

    for(i=0;;i++)
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
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        break;
             }
    }

    int f=0;
    float g=0,h,avg2;

             for(i=0;;i++)
    {
        cin>>z;
        if(z<0 || z>10)
        {
            cout<<"nota invalida"<<endl;
        }
        if(z==1)
        {
            for(i=0;;i++)
            {

            cin>>h;
             if(h<0 || h>10)
        {
            cout<<"nota invalida"<<endl;
        }

        if(h>=0 && h<=10 )
            {
             g =h+g;
         f++;
            }
             if(f==2)
             {
        avg2=(float)g/2.0;
        cout<<fixed<<setprecision(2)<<"media = "<<avg2<<endl;
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        break;
             }
        }
    }
        if(z!=1 && z!=2 && z>=0 && z<=10)
        {

            cout<<"novo calculo (1-sim 2-nao)"<<endl;
        }
        if(z==2)
            {
                break;
            }

  }

    }


