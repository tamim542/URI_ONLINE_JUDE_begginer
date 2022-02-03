#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c,d;
    cin>>a >> b;
    c=b%a;
    d=a%b;
    if(c==0 || d==0)
    cout<<"Sao Multiplos"<<endl;
    else{cout<<"Nao sao Multiplos"<<endl;}


}
