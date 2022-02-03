#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double N[12][12],sum=0.0;
    char O[2];
    cin>>O;
    int n=1,i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
           cin>>N[i][j];
        }
    }
    for(i = 10;i >=0;i--){
        for(j = 0;j < n;j++){
            sum += N[i][j];
        }
        n++;
    }
    if (O[0]=='S')
    {
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1)<<sum/66.0<<endl;
    }
    return 0;
}
