//Simple Program for Virtual Functions
#include<iostream.h>
#include<conio.h>

class base
{
public:
    virtual void show()
    {
	cout << "\n  Base class show:";
    }

    void display()
    {
	cout << "\n  Base class display:";
    }
};

class drive : public base
{

public:

    void display()
    {
	cout << "\n  Drive class display:";
    }

    void show()
    {
	cout << "\n  Drive class show:";
    }
};

void main()
{
    clrscr();
    base obj1;
    base *p;
    drive *p1;
    cout << "\n\t P points to base:\n";

    p = &obj1;
    p->display();
    p->show();

    cout << "\n\n\t P points to drive:\n";
    drive obj2;
    p1 = &obj2;
    p1->display();
    p1->show();
    getch();
}
