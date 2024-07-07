#include<iostream.h>
#include<conio.h>
class test
{
static int cnt;
	int code;
public:
      void setcode()
      {
      code=++cnt;
      }
     inline void display(void)
     {
     cout<<"code= "<<code<<endl;
     }
     static void cnshow(void)
     {
     cout<<" count = "<<cnt<<endl;
     }
};
int test::cnt;
void main()
{
 test t1,t2;
 clrscr();
 t1.setcode();
 t2.setcode();
 test::cnshow();
 test t3;
 t3.setcode();
 test::cnshow();
 t1.display();
 t2.display();
 t3.display();
 getch();
 }




