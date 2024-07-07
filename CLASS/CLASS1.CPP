//declare class student having dm roll_no&nm.accept &display 1obj//
#include<iostream.h>
#include<conio.h>
class student
{
private:int r_no;
		char nm[20];
public:void in()
	{
	  cout<<"\n\tenter roll number and name of student :";
	  cin>>r_no>>nm;
	}
  void out()
	{
	  cout<<"\n\troll number is :"<<r_no<<endl;
	  cout<<"\n\tname of student is :"<<nm;
	}
};
void main()
{
clrscr();
student s;
s.in();
s.out();
getch();
}
