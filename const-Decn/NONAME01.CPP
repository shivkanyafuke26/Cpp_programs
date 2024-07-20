#include<iostream.h>
#include<conio.h>
class bank
{
 private:
	int id,pan,dob;
	char nm[5],add[10],gen,ac;
 public:
	bank(int a,int b,int c,char d,char e,char f,char g)
	{
	 id=a;
	 pan=b;
	 dob=c;
	 nm=d;
	 add=e;
	 gen=f;
	 ac=g;
	}
	void get();
	void display();
 };
 ~bank();
 cout<<"\n Condtructor is destroyed";


 void bank::get()
 {
  cout<<"\n Enter customer id =";
  cin>>a;

  cout<<"\n Enter customer name =";
  cin>>d;

  cout<<"\n Enter customer address =";
  cin>>e;

  cout<<"\n Enter customer gender =";
  cin>>f;

  cout<<"\n Enter customer pan no =";
  cin>>b;

  cout<<"\n Enter account type =";
  cin>>g;
 }

