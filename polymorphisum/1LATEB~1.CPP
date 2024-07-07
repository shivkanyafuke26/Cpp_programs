/*Virtual Function is a member function of the base class which is
overridden in the derived class. The compiler performs late binding
on this function.

To make a function virtual, we write the keyword virtual before the
function definition.
			*/
#include <iostream.h>
#include <conio.h>

class Animals
{
	public:
		virtual void sound()
		{
			cout << "This is parent class" << endl;
		}
};

class Dogs : public Animals
{
	public:
		void sound()
		{
			cout << "Dogs bark" << endl;
		}
};

void main()
{       clrscr();
	Animals *a;
	Dogs d;
	a= &d;
	a -> sound();
	getch();
}
