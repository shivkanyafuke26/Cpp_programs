#include <iostream.h>
#include <conio.h>


class Temperature
{
	int celsius;
	public:
		Temperature()
		{
			celsius = 0;
		}
		friend int temp( Temperature );   // declaring friend function
};

int temp( Temperature t )     // friend function definition
{
	t.celsius = 78;
	return t.celsius;
}

void main()
{
clrscr();
	Temperature tm;
	cout << "Temperature in celsius : " << temp( tm ) << endl;
	getch();
}
