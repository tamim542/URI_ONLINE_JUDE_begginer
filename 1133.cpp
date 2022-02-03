#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c,i,j;
    cin>>a>>b;
    if(a<b)
    {
        swap(a,b);

    }
   for(i=b+1; i<a;i++)
   {
       c=i%5;
       if(c==2 || c==3)
        cout<<i<<endl;
   }
}
