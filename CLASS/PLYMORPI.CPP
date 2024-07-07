#include<iostream.h>
#include<conio.h>
class employee
{
int id,sal;
char nm[10];
public: void in()
{
cout<<"\n\tenter employee id and name :";
cin>>id>>nm;
cout<<"\n\tenter salary of employee :"<<endl;
cin>>sal;
}
virtual void out()
{
cout<<"\n\temployee id is :"<<id<<endl;
cout<<"\n\temployee name is :"<<nm<<endl;
cout<<"\n\tsalary is :"<<sal<<endl;
}
};
class programmer:public employee
{
int pid,sal1;
char pnm[10];
public :void in1()
{
cout<<"\n\t enter programmer id and name :";
cin>>pid>>pnm;
cout<<"\n\tenter salary of programmer :"<<endl;
cin>>sal1;
}
void out()
{
cout<<"\n\tprogrammer id is :"<<pid<<endl;
cout<<"\n\t name is :"<<pnm<<endl;
cout<<"\n\t salary is :"<<sal1<<endl;
}
};
void main()
{
employee e,*bptr;
clrscr();
bptr=&e;
cout<<"\n\t base class function i/p and o/p data "<<endl;
bptr->in();
bptr->out();

programmer p,*dptr;
bptr=&p;
dptr=&p;
cout<<"\n\t derived class output "<<endl;
dptr->in1();
dptr->out();
getch();
}