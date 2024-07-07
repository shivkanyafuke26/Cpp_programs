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
   a=x.a;
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
c1.display();
c2.display();
getch();
}