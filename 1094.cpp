#include<iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    int i,n,sum=0,s=0,c=0,r=0,a;
    char b;
    float cp,rp,sp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        sum=sum+a;
        if(b=='C')
        {
            c=a+c;
        }
        if(b=='R')
        {
            r=a+r;
        }
        if(b=='S')
        {
            s=a+s;
        }

    }

    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cp=(float)c/sum*100;
    rp=(float)r/sum*100;
    sp=(float)s/sum*100;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<cp<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<rp<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<sp<<" %"<<endl;
    return 0;
}
