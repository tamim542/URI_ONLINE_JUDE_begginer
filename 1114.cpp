
#include<iostream>
using namespace std;
int main(void)
{
    int n=2002,x,i;

  for(i=0;;i++)
  {
      cin>>x;
      if(x==n)
      {
          cout<<"Acesso Permitido"<<endl;
          break;
      }


        else
        {
            cout<<"Senha Invalida"<<endl;
        }
  }

}
