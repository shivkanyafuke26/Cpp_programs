#include<iostream.h>
#include<conio.h>
class salary
{
int sal,ta,da,hra,bs;
public:
	salary(float a,float b,float c=4500,float d=600)
{
bs=a;
ta=b;
da=c;
hra=d;
}
void out()
{
sal=bs+ta+da+hra;
cout<<"\n\n basic sal:"<<bs;
cout<<"\n TA:"<<ta;
cout<<"\n DA:"<<da;
cout<<"\n HRA:"<<hra;
cout<<"\n total sal="<<sal;
}
};
void main()
{
salary s1(2000,600);
salary s2(6000,500,200,100);
clrscr();
s1.out();
cout<<"\n";
s2.out();
getch();
}
