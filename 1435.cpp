#include<iostream>
using namespace std;
int main()
{
    int i,j,n,x,k;
    for(k=0;;k++){
        cin>>n;
        if(n==0)
            break;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                x = i;
                if(j < x)
                x = j;
                if(n-i+1 < x)
                x = n-i+1;
                if(n-j+1 < x)
                x = n-j+1;
                cout<<"   "<<x;
                if(j < n)
                cout<<" ";
                else
                cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
