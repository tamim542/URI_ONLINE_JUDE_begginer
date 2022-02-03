#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    double M[12][12],sum=0.0;
    char c[2];
    cin>>c;
    int n=11,o=1,i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            cin>>M[i][j];
        }
    }
    for(i = 0;i < 5;i++){
        for(j = o;j < n;j++){
            sum += M[j][i];
        }
        n--;
        o++;
    }
    if (c[0]=='S')
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else cout<<fixed<<setprecision(1)<<sum/30.0<<endl;
    return 0;
}


