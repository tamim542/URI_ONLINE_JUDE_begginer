#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(void)
{

double x1,x2,y1,y2,result1,result2,result3,result4,result5,result6;
    cin>>x1>>y1>>x2>>y2;
    result1=(x2-x1);
        result3=(y2-y1);
        result4=pow(result1,2);
        result5=pow(result3,2);
        result6=result4+result5;
    result2=sqrt(result6);
    cout<<fixed<<setprecision(4)<<result2<<endl;
    return 0;
}



