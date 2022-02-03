#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
 {
     int x,y;
     float z;
     cout<<"choose menu ";
     cin>>x;
     if(x==1)
     {
         cout<<"enter quantity ";
      cin>>y;
     z= y*4.00;
     cout<<fixed<<setprecision(2)<<"R$ "<<z<<endl;
     }

     if(x==2)
     {
          cout<<"enter quantity ";
      cin>>y;
     z= y*4.50;
     cout<<fixed<<setprecision(2)<<"R$ "<<z<<endl;
     }

     if(x==3)
     {
          cout<<"enter quantity ";
      cin>>y;
     z= y*5.00;
     cout<<fixed<<setprecision(2)<<"R$ "<<z<<endl;
     }

     if(x==4)
     {
          cout<<"enter quantity ";
      cin>>y;
     z= y*2.00;
     cout<<fixed<<setprecision(2)<<"R$ "<<z<<endl;
     }

     if(x==5)
     {
          cout<<"enter quantity ";
      cin>>y;
     z= y*1.50;
     cout<<fixed<<setprecision(2)<<"R$ "<<z<<endl;
     }
 }
