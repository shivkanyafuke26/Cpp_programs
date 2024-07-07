#include<iostream.h>
#include<conio.h>
class stud
{
 public:
	int Rn;
	char nm[5];
	void get()
	{
	 cout<<"\n\t Enter stud name :";
	 cin>>nm;
	 cout<<"\n\t Enter stud Roll no :";
	 cin>>Rn;
	}
};

class test:public stud
{
  public:
	int m1,m2,m3,m4,m5,tot;
	float avg;
	void get1()
	{
	 cout<<"\n\t Enter five sub marks :";
	 cin>>m1>>m2>>m3>>m4>>m5;
	}
	void cal()
	{
	 tot=m1+m2+m3+m4+m5;
	 avg=tot/5;
	}
	void put1()
	{
	 cout<<"\n\t Marks :"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<m5;
	 cout<<"\n\t Total :"<<tot;
	 cout<<"\n\t Avg :"<<avg;
	}
};

class result:public test
{
 public:
	void cal1()
	{
	 if(avg>=90)
	 {
	  cout<<"\n\t Merit";
	 }
	 else if(avg>=75&&avg<=89)
	 {
	  cout<<"\n\t Distiction";
	 }
	 else if(avg>=60&&avg<=74)
	 {
	  cout<<"\n\t First class";
	 }
	 else if(avg>=50&&avg<=59)
	 {
	  cout<<"\n\t Second class";
	 }
	 else if(avg>=35&&avg<=49)
	 {
	  cout<<"\n\t Third class";
	 }
	 else
	 {
	 cout<<"\n\t Fail";
	 }
	}
 };

 void main()
 {
  result r;
  clrscr();
  r.get();
  r.get1();
  r.cal();
  r.put1();
  r.cal1();
  getch();
 }
