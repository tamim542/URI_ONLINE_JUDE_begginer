
#include<iostream>
using namespace std;
int main(void)
{
    int n,x,y,temp,i,j,sum,m;
for(i=0;;i++)
 {
   cin>>m;
   cin>>n;
   if(m>n)
   {
       temp=m;
       m=n;
       n=temp;
   }

   if(m<=0 || n<=0)
    break;
    sum=0;
   for(j=m;j<=n;j++)
   {

       cout<<j<<" ";

           sum=sum+j;



    }
    cout<<"Sum="<<sum<<endl;
  }
}


