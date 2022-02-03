#include<iostream>
using namespace std;
 int main(void)

    {
        int count1=0,count2=0,count3=0,count4=0,i,a[5];

        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<5;i++)
        {
            if(a[i]>0)
            {
                count3++;
            }
            if(a[i]<0)
            {
                count4++;
            }
            if(a[i]<0)
            {
                a[i]= -a[i];
            }
           if(a[i]%2==0)
            {
                count1++;
            }
            if(a[i]%2!=0)
            {
                count2++;
            }
        }


        cout<<count1<<" valor(es) par(es)"<<endl;
         cout<<count2<<" valor(es) impar(es)"<<endl;
          cout<<count3<<" valor(es) positivo(s)"<<endl;
           cout<<count4<<" valor(es) negativo(s)"<<endl;


            }


