//program of friend function
#include<iostream.h>
#include<conio.h>

class B;
class A
  {
//public:
int vari,x;
public:
   void setvalue(int vari)
  {
   vari=x;
   }
friend void add(B,A);
};

class B
{
//public:
int vari2,y;
public:
  void setvalue(int vari2)
   {
   vari2=y;
   }
friend void add(B,A);
};


void add(B ob1,A ob2)
{
int c;
c=ob1.B+ob2.A;
cout<<"Addition is = "<<c<<endl;
}

void main()
{
clrscr();
B ob1;
ob1.setvalue(32);

A ob2;
ob2.setvalue(43);

add(ob1,ob2);
getch();
}