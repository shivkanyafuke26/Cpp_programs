//program of scooty with scope resolution
#include<iostream.h>
#include<conio.h>
class scooty
{
private: int price,no;
	 char s_name[15];
	 float avg;
public:  void getdata();

};
void scooty::getdata()
{
cout<<"\n\tEnter the name of the scooty :";
cin>>s_name;


cout<<"\n\tEnter the avg of the scooty :";
cin>>avg;

cout<<"\n\tEnter the price of the scooty :";
cin>>price;

cout<<"\n\tEnter the no. of the scooty :";
cin>>no;

}
void main()
{
scooty s;
clrscr();
s.getdata();
getch();
}

