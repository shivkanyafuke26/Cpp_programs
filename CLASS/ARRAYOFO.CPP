//array of object//
#include<iostream.h>
#include<conio.h>
class student
{
private: int r_no;
		 char nm[20];
public: void in();
		void out();
};
void student::in()
{
cout<<"\n\t enter rno and name of student"<<endl;
cin>>r_no>>nm;
}

void student::out()
{
cout<<"\n\troll number of student is :"<<r_no<<endl;
cout<<"\n\tname of student is :"<<nm;
}

void main()
{
student s[3]; //array of object//
clrscr();
for(int i=0;i<3;i++)
{
s[i].in();
}
for(i=0;i<3;i++)
{
s[i].out();
}
getch();
}