//multiple
#include<iostream.h>
#include<conio.h>
class product
{
protected:
		   char p1[10],p2[10],p3[10],p4[10],p5[10];
public:
		void getp()
		{
		cout<<"\n\t enter any five product which u want to purchase :";
		cin>>p1>>p2>>p3>>p4>>p5;
		}
		void putp()
		{
		cout<<"\n\t product 1 :"<<p1;
		cout<<"\n\t product 2 :"<<p2;
		cout<<"\n\t product 3 :"<<p3;
		cout<<"\n\t product 4 :"<<p4;
		cout<<"\n\t product 5 :"<<p5<<endl;
		}
};
class price
{
protected: int pr1,pr2,pr3,pr4,pr5;
public:
		void getpr()
		{
		cout<<"\n\tenter price of all 5 product :";
		cin>>pr1>>pr2>>pr3>>pr4>>pr5;
		}
		void putpr()
		{
		cout<<"\n\t price of:"<<pr1<<"rs"<<endl;
		cout<<"\n\t price of  :"<<pr2<<"rs"<<endl;
		cout<<"\n\t price of 3rd product :"<<pr3<<"rs"<<endl;
		cout<<"\n\t price of 4th product :"<<pr4<<"rs"<<endl;
		cout<<"\n\t price of 5th product :"<<pr5<<"rs"<<endl;
		}
};
class bill:public product,public price
{
protected: int tot;
		   float dis;
public:
		void putbill()
		{
		tot=pr1+pr2+pr3+pr4+pr5;
		cout<<"\n\ttotal bill is :"<<tot<<endl;

		if(tot>1000)
		{
		cout<<"\n\tyour bill is more than 1000...you got 10% discout"<<endl;
		}
		else
		{
		cout<<"\n\t your bill is less than 1000..sorry u dont have any discount"<<endl;
		}
		dis=tot*10/100;
		tot=tot-dis;
		cout<<"\n\t you pay just :"<<tot<<"rs"<<endl;

	  }
};

void main()
{
bill b;
//clrscr();
b.getp();
b.getpr();
b.putp();
b.putpr();
b.putbill();
getch();
}



