#include<iostream>
using namespace std;
int main(void)
{
    int f,g,h,i,x1,x2,y1,y2,suma,a,b,c,d,e;
    cin>> x1>> x2>>y1>> y2;
    if(x1==y1 && x2==y2)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<" E "<<"0"<<" MINUTO(S)"<<endl;
    }
     if(x1<y1 && x2==y2)
    {


        d=y1-x1;


      cout<<"O JOGO DUROU "<<d<<" HORA(S)"<<" E "<<0<<" MINUTO(S)"<<endl;
    }
     if(x1<y1 && x2<y2)
    {

        a=x1*60+x2;
        b=y1*60+y2;
        c=b-a;
        d=c/60;
        e=c%60;



      cout<<"O JOGO DUROU "<<d<<" HORA(S)"<<" E "<<e<<" MINUTO(S)"<<endl;
    }
    if(x1<y1 && x2>y2)
    {


        d=y1-x1;

        e=y2+(60-x2);



      cout<<"O JOGO DUROU "<<d-1<<" HORA(S)"<<" E "<<e<<" MINUTO(S)"<<endl;
    }
    if(x2<y2 && x1>y1)
    {
        f=24-x1;
        g=60*f+y1*60;
        h=g/60;
        i=y2-x2;
        cout<<"O JOGO DUROU "<<h<<" HORA(S)"<<" E "<<i<<" MINUTO(S)"<<endl;
        }
       if(x2>y2 && x1>y1)
        {
            f=24-x1;
        g=60*f+y1*60;
        h=g/60;
        i=y2+(60-x2);
        cout<<"O JOGO DUROU "<<h<<" HORA(S)"<<" E "<<i<<" MINUTO(S)"<<endl;
        }
         if(x2==y2 && x1>y1)
        {
            f=24-x1;
        g=60*f+y1*60;
        h=g/60;
               cout<<"O JOGO DUROU "<<h<<" HORA(S)"<<" E "<<0<<" MINUTO(S)"<<endl;
        }

        if(x1==y1 && x2>y2)
        {
               f=24-x1;
        g=60*f+y1*60;
        h=g/60;
        i=y2+(60-x2);
        cout<<"O JOGO DUROU "<<h-1<<" HORA(S)"<<" E "<<i<<" MINUTO(S)"<<endl;
        }

      if(x1==y1 && x2<y2)
      {
          i=y2-x2;
          cout<<"O JOGO DUROU "<<0<<" HORA(S)"<<" E "<<i<<" MINUTO(S)"<<endl;
      }
    }




