#include<iostream.h>
#include<conio.h>
class sample
{
  int a,b;
  public:
	   void setvalue() {a=25,b=40;}
	   friend float mean(sample s);
};
float mean(sample s)
{
  return float((s.a+s.b)/2.0);
}
void main()
{
  clrscr();
  sample x;    //object x
  x.setvalue();
  cout<<"mean value = "<<mean(x)<<endl;
  getch();
}


