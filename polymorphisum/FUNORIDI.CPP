#include<iostream.h>
#include<conio.h>
#include<string.h>
class a
{
 public:
	char nm[5];
 public:
	void in()
	{
	 cout<<"\n\t Enter your name =";
	 cin>>nm;
	}
	void out()
	{
	 cout<<"\n Name ="<<nm;
	}

};
class b:public a
{
 char name[5];
 public:
	void in()
	{
	 cout<<"\n\t Enter your name =";
	 cin>>name;
	 // strcpy(name,nm);
	}
	void out1()
	{
	// cout<<"second name ="<<name;
	strcpy(name,nm);
	cout<<"after copy ="<<name;
	}
};

void main()
{
 b obj;
 clrscr();
 obj.a::in();
 obj.out();
 obj.b::in();
 obj.out1();
 getch();
}


