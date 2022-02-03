#include<iostream>
using namespace std;
int main()
{
    int x,i;
    while(1)
        {
            cin>>x;
            if(x==0)
                break;
            for(i=1;i<x;i++)
            {
                cout<<i<<" ";
            }

            cout<<x<<endl;
        }

}
