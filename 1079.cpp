#include<iostream>
#include<iomanip>
using namespace std;
int main(void)

    {
       float a,b,c,d;
       int i,n;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>b>>c>>d;

                a=(b*2+c*3+d*5)/10;

            cout<<fixed<<setprecision(1)<<a<<endl;
        }

        return 0;
    }

