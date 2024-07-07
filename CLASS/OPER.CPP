#include<iostream.h>
#include<conio.h>
class oper
{
int a,b,c;
public:
	void add();
	void sub();
	void mul();
	void div();
	void mod();
};
void oper::add()
{
 cout<<"\n\t Enter Any two no = ";
 cin>>a>>b;
 c=a+b;
 cout<<"\n Addition is ="<<c;
}

void oper::sub()
{
c=a-b;
cout<<"\n Subtraction is ="<<c;
}

void oper::mul()
{
c=a*b;
cout<<"\n Multiplication is ="<<c;
}

void oper::div()
{
 c=a/b;
 cout<<"\n Division is ="<<c;
}

void oper::mod()
{
 c=a%b;
 cout<<"\n Modulus is = "<<c;
}

void main()
{
 clrscr();
 oper o;
 o.add();
 o.sub();
 o.mul();
 o.div();
 o.mod();
 getch();
}
