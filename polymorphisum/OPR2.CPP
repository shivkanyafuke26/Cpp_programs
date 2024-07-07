#include<iostream.h>
#include<conio.h>
class distance
{
 int f,i;
 public:
	 void get()
	 {
	 cout<<"\n\tEnter the feet for distance=";
	 cin>>f;
	 cout<<"\n\tenter the inches for distance=";
	 cin>>i;
	 }
	 distance()
	 {
	 f=0;
	 i=0;
	 }
	 void operator--()
	 {
	  f=--f;

	  i=--i;
	  }
	  void disp()
	  {
	  cout<<"\" \tFeet="<<f;
	  cout<<"\" \tInches="<<i;
	  }

	  };
	  void main()
	  {
	  clrscr();

	  distance d;
	  d.get();
	  d.disp();
	  --d;
	  d.disp();
	  getch();}
