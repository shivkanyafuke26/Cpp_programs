/* User define friend function*/
#include<iostream.h>
#include<conio.h>
class DM;
class DB
{
public: int m,c,f;
  void in()
  {
   cout<<"\n\t Enter the Distance in meter =";
   cin>>m;
   }
   void out()
   {
   c=m*100;
   cout<<"\n\t Distance in CM="<<c<<"cm";
   }
  friend void dist(DB ob1,DM ob2);
   };
   class DM
   {

   int f,j;
   float c,i;
   public:

   void in()
   {
    cout<<"\n\t Enter the Distence in feet=";
    cin>>f;
    }
    void out()
    {
    i=f*12;
    cout<<"\n\tDistance in inch="<<i;
    c=i/2.5;
    cout<<"\n\t Distance in Cen="<<c;
    }
   friend void dist(DB ob1,DM ob2)
  };
  void dist(DB ob1,DM ob2)
  {
  int a=10;
  float tot_dis;
   tot_dis=ob1.c+ob2.c+a;
   cout<<"\n\t Total Distance="<<tot_dis;
   }
   void main()
   {
    clrscr();
    DB ob1;
    DM ob2;
    ob1.in();
    ob1.out();
    cout<<"\n---------------------------------------------------------";
       ob2.in();
       ob2.out();
       dist(ob1,ob2);
       getch();
   }
