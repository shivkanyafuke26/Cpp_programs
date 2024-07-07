
/*
In early binding, the compiler matches the function call with the
correct function definition at compile time. It is also known as
Static Binding or Compile-time Binding. By default, the compiler goes
to the function definition which has been called during compile time.
So, all the function calls you have studied till now are due to early
binding.*/
#include <iostream.h>
#include <conio.h>


class Animals
{
	public:
		void sound()
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
{
	clrscr();
	Animals *a;
	Dogs d;
	a= &d;
	a -> sound();   //  early binding
	getch();
}

