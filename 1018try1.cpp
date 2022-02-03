#include<iostream>
using namespace std;

int main(void)
{
    int N,i,j,value[7],number[]={100,50,20,10,5,2,1};
    cin>>N;
       if(N>0 && N< 1000000)
       {
        for(i=0;i<7;i++)
           {

               value[i]=N/number[i];
               N=N%number[i];
           }
           for(j=0;j<7;j++)
           {
            cout<< value[j]<<" nota(s) de R$ "<<number[j]<<",00"<<endl;
        }
       }


     return 0;
    }
