//parameterised constrotor
#include<iostream.h>
#include<conio.h>
class student
{
private:int r,m1,m2;

 public:
student(int a,int b,int c)
{
r=a;
m1=b;
m2=c;
}


void disp()
{
cout<<"\n\tStudent Details";

cout<<"\n\tStudent Roll Num="<<r;
cout<<"\n\tStudent Marks1="<<m1;
cout<<"\n\tStudent Marks2="<<m2;
}
~student()
{
cout<<"Destroy details";
}
};
void main()
{
clrscr();
student b(1,30,30);

b.disp();
//d.disp();
getch();
}

