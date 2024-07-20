//copy constructor
#include<iostream.h>
#include<conio.h>
#include<string.h>
class copy
{
 int a;
 public:
	copy()
	{
	a=100;
	}

   copy(copy &x)
   {
   a=x.a+80;
   }
void display()
{
cout<<"\n\tvalue of a is :"<<a<<endl;
}
};

void main()
{
copy c1;
copy c2=c1;
clrscr();
cout<<"In default const=";
c1.display();
cout<<"In copy const=";
c2.display();
getch();
}