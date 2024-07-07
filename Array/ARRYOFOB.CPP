//array of object//
#include<iostream.h>
#include<conio.h>
class account
{
private: int acc_no;
		 int bal;
public: void get()
{
cout<<"\n\t enter acc no and balance :"<<endl;
cin>>acc_no>>bal;
}
void out()
{
cout<<"\n\t account number is :"<<acc_no<<endl;
cout<<"\n\tbalance is :"<<bal<<endl;
}
};

void main()
{
account a[3];
clrscr();
for(int i=0;i<3;i++)
{
a[i].get();
}
for(i=0;i<3;i++)
{
a[i].out();

}
getch();
}