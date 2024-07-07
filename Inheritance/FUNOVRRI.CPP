//function overriding
#include<iostream.h>
#include<conio.h>
class A
{
 int m;
 public: void in()
 {
 cout<<"\n\tEnter the value of m=";
  cin>>m;
  }
  void out()
  {
  cout<<"M="<<m<<endl;
  }
  };
  class B:public A
  {
  int n;
  public: void in()
 {
 cout<<"\n\t value of n=";
  cin>>n;
  }
  void out1()
  {
  cout<<"N="<<n<<endl;
  }
 };
 void main()
 {

 B obj;
 clrscr();

 obj.A::in();
 obj.B::out();
 obj.in();
 obj.out1();
 getch();
 }


