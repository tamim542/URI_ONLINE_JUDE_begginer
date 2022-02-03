#include<iostream>
using namespace std;
int main(void)
{
    int n,x,y,temp,i,j,sum,m;


   cin>>n;
   for(i=0;i<n;i++)
   {

   cin>>x>>y;
   if(x>y)
   {
       temp=x;
       x=y;
       y=temp;
   }
   m=y-x;
   if(m>=2)
   {
    sum=0;
   for(j=x+1;j<y;j++)
   {
       if(j%2!=0)
       {
           sum=sum+j;
       }
   }
   cout<<sum<<endl;
   }
   else{cout<<"0"<<endl;}


   }

}
