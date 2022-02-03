#include<iostream>
using namespace std;
int main(void)
{
    int i=1,j,k;
    for(k=0;;k++)
    {

        for(j=7;j>=5;j--)
        {
          cout<<"I="<<i<<" J="<<j<<endl;
        }
        i+=2;
        if(i>9)
            break;

    }


  return 0;
}
