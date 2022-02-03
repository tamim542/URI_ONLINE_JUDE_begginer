#include<iostream>
using namespace std;
 int main(void)

    {
        int i,n;
        cin>>n;
        if(n%2==0)
            {

        for(i=n;i<=n+12;i++)
        {
               if(i%2!=0)
            {
                 cout<<i<<endl;

            }
        }
            }
            else
                {
                   for(i=n;i<=n+10;i++)
        {
               if(i%2!=0)
            {
                 cout<<i<<endl;

            }


                }
            }
      return 0;
            }




