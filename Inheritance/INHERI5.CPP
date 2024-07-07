#include<iostream.h>
#include<conio.h>
class add
{
private:int a,b,c;
public:
void get1()
{
cout<<"enter a,b: ";
cin>>a>>b;
}
void put1()
{
c=a+b;
cout<<"add: "<<c;
}
};
 class sub:public add
{
private:int a,b,c;
public:
void get2()
{
cout<<"enter a,b: ";
cin>>a>>b;
}
void put2()
{
c=a-b;
cout<<"sub: "<<c;
}
};
 class mul:public sub
{
private:int a,b,c;
public:
void get3()
{
cout<<"enter a,b: ";
cin>>a>>b;
}
void put3()
{
c=a*b;
cout<<"mul: "<<c;
}
};
 class div:public mul
{
private:int a,b,c;
public:
void get4()
{
cout<<"enter a,b: ";
cin>>a>>b;
}
void put4()
{
c=a/b;
cout<<"div: "<<c;
}
};
void main()
{
div d;
clrscr();
d.get1();
d.put1();
   d.get2();
d.put2();
   d.get3();
d.put3();
   d.get4();
d.put4();
getch();
}