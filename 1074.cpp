#include<iostream>
using namespace std;
int main(void)

    {
        int i,n,a;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a<0 && a%2!=0)
            {
                cout<<"ODD NEGATIVE"<<endl;
            }
             if(a>0 && a%2!=0)
            {
                cout<<"ODD POSITIVE"<<endl;
            }
            if(a<0 && a%2==0)
            {
                cout<<"EVEN NEGATIVE"<<endl;
            }
            if(a>0 && a%2==0)
            {
                cout<<"EVEN POSITIVE"<<endl;
            }

            if(a==0)
            {
                cout<<"NULL"<<endl;
            }


        }
    }

