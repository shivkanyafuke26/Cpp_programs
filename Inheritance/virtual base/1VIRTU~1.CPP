//Simple Program for Virtual  Base Class Example Program
#include<iostream.h>
#include<conio.h>

class student
{
    int rno;
public:
    void getnumber()
    {
	cout << "Enter Roll No:";
	cin>>rno;
    }

    void putnumber()
    {
	cout << "\n\n\tRoll No:" << rno << "\n";
    }
};

class test : virtual public student
{
public:
    int part1, part2;

  void getmarks()
  {
	cout << "Enter Marks\n";
	cout << "Part1:";
	cin>>part1;
	cout << "Part2:";
	cin>>part2;
    }

    void putmarks()
    {
	cout << "\tMarks Obtained\n";
	cout << "\n\tPart1:" << part1;
	cout << "\n\tPart2:" << part2;
    }
};

class sports : public virtual student
{
public:
    int score;

    void getscore()
    {
	cout << "Enter Sports Score:";
	cin>>score;
    }

    void putscore()
    {
	cout << "\n\tSports Score is:" << score;
    }
};

class result : public test, public sports
{

    int total;

public:

    void display()
    {
	total = part1 + part2 + score;
	putnumber();
	putmarks();
	putscore();
	cout << "\n\tTotal Score:" << total;
    }
};

void main()
{
    result obj;
    clrscr();
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
    getch();
}
