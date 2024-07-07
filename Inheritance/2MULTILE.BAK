//mutilevel inheritance
#include<iostream.h>
#include<conio.h>

	 class emp
	 {
	 protected:int id;
		    char nm[20];
	public:
		void get1()
	 {
	 cout<<"Enter emp Id and Name="<<endl;
	 cin>>id>>nm;
	 }
	 void put1()
	 {
	 cout<<"Emp_id="<<id<<endl;
	 cout<<"Emp_Name="<<nm<<endl;
	 }
	 };
	 class fitness:public emp
	 {
	 protected: int h,w;
	   public:void get()
	   {
	   cout<<"Enter the Height And Weight=";
	   cin>>h>>w;
	   }
	   void put()
	   {
	   cout<<"Height="<<h<<endl;
	   cout<<"weight="<<w<<endl;
	   }
	   };
	   class status:public fitness
	   {
	   protected: int sal;
	   char post[15];
	   public:
	   void get2()
	   {
	   cout<<"enter the Salary of Employee="<<endl;
	   cin>>sal;
	   cout<<"enter the Post of Employee="<<endl;
	   cin>>post;
	   }
	   void put2()
	   {
	   cout<<"Salary="<<sal<<endl;
	   cout<<"Post="<<post<<endl;
	   }
	   };
	   void main()
	   {
	   status s;
	   clrscr();
	   cout<<"Enter employee Details"<<endl;
	   s.get1();
	   s.get();
	   s.get2();
	   cout<<"Enter employee Details are"<<endl;
	   s.put1();
	   s.put();
	   s.put2();
	   getch();
	   }
