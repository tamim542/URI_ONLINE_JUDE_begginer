#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int n,x,y,i;
    float temp;
    cin>>n;
for(i=0;i<n;i++)
 {
   cin>>x;
   cin>>y;
 if(y==0)
 {
     cout<<"divisao impossivel"<<endl;
 }
 else
    {
        temp=(float)x/y;
        cout<<fixed<<setprecision(1)<<temp<<endl;
    }


    }

  }



