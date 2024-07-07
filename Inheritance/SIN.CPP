#include<iostream.h>
#include<conio.h>
class furniture
{
protected:
	    char material[20],quality[10];
	    int price;
public:
	void getdata()
	{
	cout<<"\n\tenter material name and price :";
	cin>>material>>price;
	cout<<"\n\t enter quality of material :";
	cin>>quality;
	}
	void putdata()
	{
	cout<<"\n\tmaterial name is :"<<material;
	cout<<"\n\t price of material is :"<<price<<endl;
	cout<<"\n\t quality of material is :"<<quality<<endl;
	}
};
class table:public furniture
{
protected:
	  float height;
public: void getdata1()
	{
	cout<<"\n\t enter height of table :"<<endl;
	cin>>height;
	}
};

void main()
{
table t;
clrscr();
t.getdata();
t.getdata1();
t.putdata();

getch();
}