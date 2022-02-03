#include<iostream>
using namespace std;
int main(void)
{
    int i=1,j,k,m=7,n=5;
    for(k=0;;k++)
    {

        for(j=m;j>=n;j--)
        {
          cout<<"I="<<i<<" J="<<j<<endl;
        }
        i+=2;
        m+=2;
        n+=2;
        if(i>9)
            break;

    }


  return 0;
}

