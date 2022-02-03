#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double N[12][12],sum=0.0;
    int i,j,k,l,m,n;
    char x[2];
    cin>>k;
    cin>>x;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
             cin>>N[i][j];

        }
    }
    for(i = 0;i < 12;i++){
            sum += N[i][k];
        }
    if(x[0]=='S')printf("%.1lf\n",sum);
    else if(x[0]=='M')printf("%.1lf\n",sum/12.0);
    return 0;
}
