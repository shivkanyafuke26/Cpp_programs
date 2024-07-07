#include<iostream.h>
#include<conio.h>
class worker
{ int salary;
public:
void get()
{
cout<<"enter your salary: ";
cin>>salary;
}
void put()
{
cout<<"salary: "<<salary;
}
};
class manager
{ int allowance;
public:
void get2()
{
cout<<"enter your allowance: ";
cin>>allowance;
}
void put2()
{
cout<<"allowance: "<<allowance;
}
};
class employee:public worker,public manager
{ int id;
char name[10];
public:
void get3()
{
cout<<"enter your name: ";
cin>>name;
cout<<"enter your id: ";
cin>>id;
}
void put3()
{
cout<<"name: "<<name;
cout<<"id: "<<id;
}
};
void main()
{
employee e;
clrscr();
e.get();
e.put();
e.get2();
e.put2();
e.get3();
e.put3();
getch();
}

