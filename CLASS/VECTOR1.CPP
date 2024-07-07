#include<iostream.h>
#include<conio.h>
class vector
{      public:
  int v[3];
 // public:
  vector()
  {
  }
  vector(int *x)
  {
    for(int i=0;i<3;i++)
    {
      v[i]=x[i];
    }
  }
  friend vector operator*(int a,vector b);
  };
  vector operator*(int a,vector b)
  {
   vector c;
   for(int i=0;i<3;i++)
   {c.v[i]=a*b.v[i];
   }
   return (c);
   }
   int x[3]={2,4,6};
    void main()
    {
     clrscr();
     vector m;
     vector n=x;
       m=2*n;
       cout<<"m.v[0]="<<m.v[0]<<endl;
       cout<<"m.v[1]="<<m.v[1]<<endl;
       cout<<"m.v[2]="<<m.v[2]<<endl;
       getch();
     }



