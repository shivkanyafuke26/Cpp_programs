#include<iostream.h>
#include<conio.h>
class a1
{
 public:
 int mark1;

	void in1()
	{
	cout<<"enter mark1 \n";
	cin>>mark1;
	}

   class a2
    {
     public:
     int mark2;

	  void in2()
	  {
	   cout<<"enter mark2 \n";
	   cin>>mark2;
	   }
	  class a3//:public a1,public a2
	 {
	  public:
	  int total;

	      void out()
	      {
		  total=mark1+mark2;
		cout<<"total marks= "<<total<<endl;
		cout<<"average = "<<(total/2)<<endl;
	      }
	 };
    };
};
  void main()
  {
   clrscr();
   a1 a;
/*   a1::a2 b;
   a1::a2::a3 c;
   a.in1();
   b.in2();
   c.out();  */
   a.in1();
   a1::a2 b;
   b.in2();
   a1::a2::a3 c;
   c.out();
   getch();
  }




