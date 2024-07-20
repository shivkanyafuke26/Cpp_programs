#include<iostream.h>
#include<conio.h>

class vehicle
{
 int n;

 char mn[5],m[5];
 public:
 vehicle()
 {
 n=10;
mn[5]='H';
m[5]='B';
 }
	vehicle(vehicle &v)
	{
	 n=v.n;
	 mn[5]=v.mn[5];
	 m[5]=v.m[5];
	}
	void disp()
	{
	 cout<<"\n\t Vehicle no is="<<n;
	 cout<<"\n\t Vehicle model name is ="<<mn;
	 cout<<"\n\t Vehicle model color is ="<<m;
	}
 };

 void main()
 {

  clrscr();
  vehicle v1;
  vehicle v2=v1;
  v1.disp();
  v2.disp();
  getch();
 }
