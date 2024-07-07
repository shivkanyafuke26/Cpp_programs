#include<iostream.h>
#include<conio.h>
class speed
{   public:
 int s,k;
 public:
	void get()
	{
	 cout<<"\n\t Enter the speed =";
	 cin>>s;
	 cout<<"\n\t Enter kilometers for speed =";
	 cin>>k;
	}
	speed()
	{
	 s=0;
	 k=0;
	}
	void incr()
	{
	 s++,k++;
	}
	void disp()
	 {
	  cout<<"\n\t Speed ="<<s;
	  cout<<"\n\t kilometers ="<<k;
	 }
       };

void main()
{
 speed sp;
 clrscr();
 sp.get();
 sp.disp();
 sp.incr();
 sp.disp();
 getch();
}
