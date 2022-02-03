#include<iostream>

using namespace std;

int main(void)
 {

int x,y,z;
cin>>x>>y>>z;
if(x>y && y>z){
    cout<<z<<endl<<y<<endl<<x<<endl<<endl;
}
if(x>z && z>y){
    cout<<y<<endl<<z<<endl<<x<<endl<<endl;
}
    if(y>x && x>z){
    cout<<z<<endl<<x<<endl<<y<<endl<<endl;
 }

    if(y>z && z>x){
    cout<<x<<endl<<z<<endl<<y<<endl<<endl;
 }

    if(z>y && y>x){
    cout<<x<<endl<<y<<endl<<z<<endl<<endl;
 }
    if(z>x && x>y){
    cout<<y<<endl<<x<<endl<<z<<endl<<endl;
    }

    cout<<x<<endl<<y<<endl<<z<<endl;
return 0;
     }


