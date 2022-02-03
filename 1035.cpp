#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
    int A,B,C,D;
    int r1,r2;
    cin>>A>>B>>C>>D;
    r1=A+B;
    r2=C+D;
    if(B>C && D>A && r1<r2 && C>=0 && D>=0 && A%2==0)
    {
        cout<<"Valores aceitos"<<endl;
    }
    else
    {
        cout<<"Valores nao aceitos"<<endl;
    }

    return 0;
}

