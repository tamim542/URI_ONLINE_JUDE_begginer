#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
 {
     float a,b,c,d,x,y,z;
     cin>>a;
     cin>>b;
     cin>>c;
     cin>>d;
     x=(a*2+b*3+c*4+d*1)/10;
     cout<<"Media :"<<fixed<<setprecision(1)<<x<<endl;
     if(x>=7.0)
     {

     cout<<"Aluno aprovado."<<endl;

     }

     else if(x>=5.0)
     {
            cout<<"Aluno em exame."<<endl;


         cin>>y;
         cout<<"Nota do exame:"<<y<<endl;
          z=(x+y)/2;
           if(z>=5.0 )
            {
         cout<<fixed<<setprecision(1)<<"Aluno aprovado."<<endl<<"Media final:"<<z;

     }
     else if(z<5.0 )
     {
         cout<<fixed<<setprecision(1)<<"Aluno reproved."<<endl<<"Media final:"<<z;

     }
     }
     else{

        cout<<"Aluno reprovado."<<endl;
     }

     return 0;

 }
