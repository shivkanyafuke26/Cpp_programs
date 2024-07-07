
#include<iostream.h>
#include<conio.h>
class regular
{
 public:
	int att;
	void get()
	{
	 cout<<"\n\t Enter regular attendance :";
	 cin>>att;
	}
	void put()
	{
	 cout<<"\n\t Regular att :"<<att<<"%";
	}
};

class casual
{
 public:
	int att1;
	void get1()
	{
	 cout<<"\n\t Enter other attendance :";
	 cin>>att1;
	}
	void put1()
	{
	 cout<<"\n\t Casual att :"<<att1<<"%";
	}
};
class typist:public regular,public casual
{
 public:
	int speed;
	void get3()
	{
	 cout<<"\n\t Enter typing speed :";
	 cin>>speed;
	}
	void put3()
	{
	 cout<<"\n\t Speed :"<<speed<<"/wpm";
	}
};
class teacher
{
 public:
	char sub[10],publi[15];
	void get4()
	{
	 cout<<"\n\t Enter subject name :";
	 cin>>sub;
	 cout<<"\n\t Enter publication :";
	 cin>>publi;
	}
	void put4()
	{
	 cout<<"\n\t subject name :"<<sub;
	 cout<<"\n\t Publication :"<<publi;
	}
};
class officer
{
 public:
	char grade[5];
	void get5()
	{
	 cout<<"\n\t Enter grade :";
	 cin>>grade;
	}
	void put5()
	{
	 cout<<"\n\t Grade :"<<grade;
	}
};


class staff:public teacher,public officer,public typist
{
 public:
	int s_id;
	char nm[10];
	void get6()
	{
	 cout<<"\n\t Enter staff id :";
	 cin>>s_id;
	 cout<<"\n\t Enter staff name :";
	 cin>>nm;
	}
	void put6()
	{
	 cout<<"\n\t Staff id :"<<s_id<<"\n\t Staff name :"<<nm;
	}
};

void main()
{
 staff ob;
 clrscr();
 ob.get6();
 ob.get4();
 ob.get3();
 ob.get5();
 ob.get();
 ob.get1();
 cout<<"\n\n\t\t\2 D e t a i l s \2 :";
 ob.put6();
 ob.put4();
 ob.put3();
 ob.put5();
 ob.put();
 ob.put1();
 getch();
}















