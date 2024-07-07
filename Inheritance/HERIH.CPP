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

void out()
{
cout<<"\n\temployee id is :"<<id<<endl;
cout<<"\n\temployee name is :"<<nm<<endl;
cout<<"\n\tsalary is :"<<sal<<endl;
cout<<"\n--------------------------------------------------------------";
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
void out1()
{
cout<<"\n\tprogrammer id is :"<<pid<<endl;
cout<<"\n\t name is :"<<pnm<<endl;
cout<<"\n\t salary is :"<<sal1<<endl;
cout<<"\n---------------------------------------------------------------";
}
};
class manager:public employee
{
int mid,msal1;
char mnm[10];
public :void in2()
{
cout<<"\n\t enter manager id and name :";
cin>>mid>>mnm;
cout<<"\n\tenter salary of Manager :"<<endl;
cin>>msal1;
}
void out2()
{
cout<<"\n\tmanager id is :"<<mid<<endl;
cout<<"\n\t name is :"<<mnm<<endl;
cout<<"\n\t salary is :"<<msal1<<endl;
cout<<"\n------------------------------------------------------------------";
}
};
void main()
{
employee e;
clrscr();
cout<<"\n\t base class function i/p and o/p data "<<endl;
e.in();
e.out();

programmer p;
cout<<"\n\t derived class output "<<endl;
p.in1();
p.out1();

manager m;
 cout<<"\n\tDerived second class output"<<endl;
 m.in2();
 m.out();

getch();
}








