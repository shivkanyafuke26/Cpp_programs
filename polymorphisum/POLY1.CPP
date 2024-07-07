#include<iostream.h>
#include<conio.h>
class book
{
 int b_id;
 char b_nm[20],a_nm[20];
 public:
	virtual void get()
	{
	 cout<<"\n\t Enter book id :";
	 cin>>b_id;
	 cout<<"\n\t Enter book name :";
	 cin>>b_nm;
	 cout<<"\n\t Enter book author name :";
	 cin>>a_nm;
	}
	virtual void put()
	{
	 cout<<"\n\t Book id :"<<b_id<<"\n\t Book name :"<<b_nm<<"\n\t Author name :"<<a_nm;
	}
};
class sub:public book
{
 char s_nm[10];
 int s_code;
 public:
	void get()
	{
	 cout<<"\n\t Enter subject name :";
	 cin>>s_nm;
	 cout<<"\n\t Enter subject code :";
	 cin>>s_code;
	}
	void put()
	{
	 cout<<"\n\t Subject name :"<<s_nm<<"\n\t Subject code :"<<s_code;
	}
};
void main()
{
 sub a,*p;
 p=&a;
 book b,*q;
 q=&b;
 clrscr();
 //cout<<"\n\t \t\t* B O O K - D E T A I L *";
 p->get();
 q->get();
 cout<<"\n\t \t\t* B O O K - D E T A I L *";
 a.put();
 b.put();
 getch();
}