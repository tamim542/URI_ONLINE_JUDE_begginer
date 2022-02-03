#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    float a[100];
    for(i=0;i<100;i++)
    {
        cin>>a[i];
    }

     for(i=0;i<100;i++)
    {

        if(a[i]<=10.0)
        {
            cout<<fixed<<setprecision(1)<<"A["<<i<<"] = "<<a[i]<<endl;
        }
    }
}
