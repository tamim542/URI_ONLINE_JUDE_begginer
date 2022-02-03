#include<iostream>
using namespace std;
 int main(void)

    {
        int i=0,x,y,sum=0;
        cin>>x>>y;
        if(x==y)
            {
                cout<<"0"<<endl;
            }
            if(x>y)
            {

        for(i=y+1;i<x;i++)
        {

           if(i%2!=0)
            {
                sum=i+sum;
            }
        }
         cout<<sum<<endl;

            }

    else if (x<y)
       {

        for(i=x+1;i<y;i++)
        {

           if(i%2!=0)
            {
                sum=i+sum;
            }
        }
         cout<<sum<<endl;
       }




            }


