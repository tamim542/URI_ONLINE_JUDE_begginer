#include<iostream>
using namespace std;
int main(void)

    {
        int a,b,c,d,x,y,z,w,s,t,r,m;
        string st;


        cin>>st>>a;

        cin>>b>>st>>c>>st>>d;



        cin>>st>>x;

        cin>>y>>st>>z>>st>>w;

        if(a==x)
        {
            cout<<"0"<<" dia(s)"<<endl;
        }

       else if(a<x && b==y && c==z && d==w)
       {
           s=x-a;
           cout<<s<<" dia(s)"<<endl;
       }

       else{
            s=x-(a+1);
           cout<<s<<" dia(s)"<<endl;
           }

       if(b>y)
       {
           t=24-b+y;
           cout<<t<<" hora(s)"<<endl;
       }

       if(b<=y)
       {
           t=y-b;
            cout<<t<<" hora(s)"<<endl;
       }

       if(c>z)
       {
           r=60-c+z;
              cout<<r<<" minuto(s)"<<endl;
       }

        if(c<=z)
       {
           r=z-c;
              cout<<r<<" minuto(s)"<<endl;
       }

        if(d>w)
       {
           r=60-d+w;
              cout<<r<<" segundo(s)"<<endl;
       }

       if(d<=w)
       {
           r=w-d;
              cout<<r<<" segundo(s)"<<endl;
       }

        return 0;
    }
