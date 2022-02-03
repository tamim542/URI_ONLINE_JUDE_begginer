#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
 {
    int x,y,i;
    for(i=0;;i++)
    {
     cin>>x>>y;

          if(x>0 && y>0)
     {

     cout<<"primeiro"<<endl;

     }

     if(x>0 && y<0)
     {
            cout<<"quarto"<<endl;

     }

     if(x<0 && y<0)
     {
            cout<<"terceiro"<<endl;

     }
     if(x<0 && y>0)
     {
            cout<<"segundo"<<endl;

     }
     if(y==0 || x==0)
     break;

 }
     return 0;

 }
