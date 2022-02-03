#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
   int R;
float A,result;
    cin>>R>>A;
    result=(R/A);
    cout<<fixed<<setprecision(3)<<result<<" km/l"<<endl;
    return 0;
}


