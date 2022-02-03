#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    long long R;
 double result;
    cin>>R;
    result=(4.0/3)*3.14159*(R*R*R);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<result<<endl;
    return 0;
}


