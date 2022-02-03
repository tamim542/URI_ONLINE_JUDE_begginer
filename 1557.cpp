#include<iostream>
using namespace std;
int main()
{
    int i,j,k,b[100][100],a,h;

    for(k=0;;k++)
    {
        h=1;
        cin>>a;
        if(a==0)
            break;
        for(i=1;i<=a;i++)
        {

            for(j=1;j<=a;j++)
            {

                b[i][j]=h;
                h=h+h;
            }

            h=b[i][2];

        }
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=a;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
