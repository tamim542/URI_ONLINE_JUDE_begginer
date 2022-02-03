#include<stdio.h>

int main(void)
{
    int N,i,j,value[7];
//scanf("%d",&N);
int number[]={100,50,20,10,5,2,1};
        for(i=0;i<7;i++)
           {

               value[i]=576/number[i];
               N=N%number[i];
           }
           for(j=0;j<7;j++)
           {
             printf("%d\n",value[i]);

        }

     return 0;
    }




