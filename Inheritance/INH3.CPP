#include<iostream.h>
#include<conio.h>
class abc
{
public:
char n1[10];
char n2[10];
public:
void get1()
{
n1="hi";
n2="vedant";
}
void abc()
{
n1=n2="Vcc";
}
void put()
{
cout<<"N1= "<<n1;
cout<<"N2= "<<n2;
}
};
void main()
{
abc obj;
clrscr();
obj.get1();
obj.put1();
obj.put();
getch();
}

