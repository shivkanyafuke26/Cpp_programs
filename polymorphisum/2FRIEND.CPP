
#include<iostream.h>
#include<conio.h>
class test2;

   class test1
    {
    int m1;

     public: void get(int a)
	{
	m1=a;
	cout<<"\n\t Marks of first test="<<m1;
	}

  friend void avg(test1,test2);
  };

  class test2
  {
  int m2;
  public :void get1(int b)
  {
   m2=b;
   cout<<"\n\t Marks of second test="<<m2;
   }
   friend void avg(test1,test2);
 };

   void avg(test1 o1,test2 o2)
   {

   float avg1;
   int sum=(o1.m1)+(o2.m2);
   cout<<"\n\t Total MarKs="<<sum;
   avg1=sum/2;
   cout<<"\n\t Avg is="<<avg1;
   }



   void main()
   {
   test1 t1;

   test2 t2;

   clrscr();

   t1.get(50);
   t2.get1(60);

   avg(t1,t2);
   getch();
    }











