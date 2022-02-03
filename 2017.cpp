#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
    int x,y;
    float result;
    cin>>x>>y;
    result =(x*y)/12.0;
    cout<<fixed<<setprecision(3)<<result<<endl;
    return 0;
}
