
#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
  double A,B,C;
    cin>>A>>B>>C;
  if(A>=B && A>=C)
    cout<<A<<" eh o maior"<<endl;

    if(A<=B && B>=C)
     cout<<B<<" eh o maior"<<endl;

    if(A<=C && C>=B)
     cout<<C<<" eh o maior"<<endl;
    return 0;
}



