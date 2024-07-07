#include<iostream.h>
#include<conio.h>
class num
{
 public:
	int a,b;
	void get()
	{
	 cout<<"\n\t Enter two num :";
	 cin>>a>>b;
	}
 };

class add:public num
{
 public:
	int c;
	void cal()
	{
	 c=a+b;
	}
	void disp()
	{
	 cout<<"\n\t Addition :"<<c;
	}
 };

 class sub:public add
 {
 public:
	void cal1()
	{
	 c=a-b;
	}
	void disp1()
	{
	 cout<<"\n\t Subtraction :"<<c;
	}
 };

  class mul:public sub
 {
 public:
	void cal2()
	{
	 c=a*b;
	}
	void disp2()
	{
	 cout<<"\n\t Multiplication :"<<c;
	}
 };

  class div:public mul
 {
    public:
	void cal3()
	{
	 c=a/b;
	}
	void disp3()
	{
	 cout<<"\n\t Division :"<<c;
	}
 };



 void main()
 {
  div d;
  clrscr();
  d.get();
  d.cal();
  d.disp();
  d.cal1();
  d.disp1();
  d.cal2();
  d.disp2();
  d.cal3();
  d.disp3();
  getch();
 }
