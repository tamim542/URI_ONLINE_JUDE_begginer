#include<iostream>
using namespace std;
int main()
{
    int a,b,j=0;
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        cout<<i<<" ";
        j++;
        if(a==j || i==b)
           {
            cout<<endl;
            j=0;
           }
    }

}
