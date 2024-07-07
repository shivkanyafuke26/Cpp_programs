//Virtual function

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
	private:
		virtual void sound()
		{
			cout << "Dogs bark" << endl;
		}
};

void main()
{
	clrscr();
	Animals *a;
	Dogs b;
	a = &b;
	a->sound();
	getch();
}
