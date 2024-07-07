#include<iostream.h>
#include<conio.h>
class x
{
public :int m;
public:void in()
{
cout<<"\n\t enter value of m=";
cin>>m;
}
void out()
{
cout<<"\n\t m="<<m;
}
};

class y:public x
{
int n;
public:void in()
{
cout<<"\n\t enter value of n=";
cin>>n;
}
void out1()
{

cout<<"\n\t n="<<n;
cout<<"\n\t sum="<<m+n;
cout<<"\n\t sub.="<<m-n;
cout<<"\n\t div.="<<m/n;
cout<<"\n sr_no\tsum\tans";
cout<<"\n------------------------------------";
cout<<"\n1\t sum"<<"\t"<<m+n;
cout<<"\n2\t sub"<<"\t"<<m-n;
}
};

void main()
{
y obj;
clrscr();
obj.x::in();
obj.x::out();
obj.in();
obj.out1();
getch();
}