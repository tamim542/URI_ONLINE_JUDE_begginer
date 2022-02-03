#include<iostream>
using namespace std;
 int main(void)

    {
        int count=0,i,a[5];

        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<5;i++)
        {
            if(a[i]<0)
            {
                a[i]= -a[i];
            }
           if(a[i]%2==0)
            {
                count++;
            }
        }


        cout<<count<<" valores pares"<<endl;

            }


