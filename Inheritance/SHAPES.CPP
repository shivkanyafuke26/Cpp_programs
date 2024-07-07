#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class square
{
 public:
	int s,a;
	void get()
	{
	 cout<<"\n\t Enter value for s :";
	 cin>>s;
	}
	void cal()
	{
	 a=s*s;
	}
	void disp()
	{
	 cout<<"\n\t Area of square :"<<a;
	}
};
class rect
{
public:
	int r,l,b;
	void get1()
	{
	 cout<<"\n\n\t Enter length & bridth of rectangle :";
	 cin>>l>>b;
	}
	void cal1()
	{
	 r=l*b;
	}
	void disp1()
	{
	 cout<<"\n\t Area of Rectangle :"<<r;
	}
};
class tri
{
 public:
	int b,h,t;
	void get2()
	{
	 cout<<"\n\n\t Enter height & bridth of triangle :";
	 cin>>b>>h;
	}
	void cal2()
	{
	 t=(0.5*b*h);
	}
	void disp2()
	{
	 cout<<"\n\t Area of Triangle :"<<t;
	}
};
class circle
{
 public:
	int r,c;
	void get3()
	{
	 cout<<"\n\n\t Enter redius of circle :";
	 cin>>r;
	}
	void cal3()
	{
	 c=(3.14*r*r);
	}
	void disp3()
	{
	 cout<<"\n\t Area of circle :"<<c;
	}
 };
class shapes:public square,public rect,public tri,public circle
{
 public:
	void get4()
	{
	 cout<<"\n\t\t\t\2 Area of shapes are \2";
	}
};

void main()
{
shapes sh;
clrscr();
sh.get4();
sh.get();
sh.cal();
sh.disp();
sh.get1();
sh.cal1();
sh.disp1();
sh.get2();
sh.cal2();
sh.disp2();
sh.get3();
sh.cal3();
sh.disp3();
getch();
}









