#include<iostream>
using namespace std;
int main(void)
{
    float i=0,j,k,m=1,n=3,t=1;
    for(k=0;;k++)
    {

        for(j=m;j<=n;j++)
        {
          cout<<"I="<<i<<" J="<<j<<endl;
        }
     if(i==t && (n-m)!=2)
     {
         n+=1;
             t++;
     }


        i+=.2;
        m+=.2;
        n+=.2;
        if(i>2.1)
            break;

    }

  return 0;
}

