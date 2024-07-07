#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{public:
 char nm[5],add[10];
 public:
	void get()
	{
	 cout<<"\n\t Enter your name :";
	 cin>>nm;
	 cout<<"\n\t Enter your address :";
	 cin>>add;
	}
	void disp()
	{
	 cout<<"\n\t Name :"<<nm;
	 cout<<"\n\t Add :"<<add;
	}
 };

 class Biodata:public person
 {
  int dob,d,m,y;
  char bg[5],edu[5],h[10];
  public:
	 void get1()
	 {
	  cout<<"\n\t Enter your Date of Birth :";
	  cin>>d>>m>>y;
	  cout<<"\n\t Enter your blood group :";
	  cin>>bg;
	  cout<<"\n\t Enter your education :";
	  cin>>edu;
	  cout<<"\n\t Enter your hobby :";
	  cin>>h;
	 }
	 void disp1()
	 {
	  cout<<"\n\t DOB :"<<d<<"-"<<m<<"-"<<y;
	  cout<<"\n\t Blood Group :"<<bg<<endl;
	  cout<<"\n\t Education :"<<edu<<endl;
	  cout<<"\n\t Hobby :"<<h<<endl;
	 }
  };

  void main()
  {

   Biodata b;
   clrscr();
   b.get();
   b.get1();
   b.disp();
   b.disp1();
   getch();
  }