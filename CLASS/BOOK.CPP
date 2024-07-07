#include<iostream.h>
#include<conio.h>
#include<string.h>
class book
{
private:
 int price1,price2,pg_no1,pg_no2;
 char first[10],second[10];

public:
 void getdata()
 {

 cout<<"enter name of first book=";
 cin>>first;


  cout<<"enter number of pages first book=";
 cin>>pg_no1;

 cout<<"enter price of first book=";
 cin>>price1;

cout<<"-------------------------------------------------------------"<<endl;

 cout<<"enter name of second book=";
 cin>>second;


  cout<<"enter number of pages second book=";
 cin>>pg_no2;


 cout<<"enter price of first book=";
 cin>>price2;

 }

 void putdata()
 {
  cout<<"\n\t-------------------------------------------------------"<<endl;
  cout<<"first book name is :"<<first[10]<<endl;
  cout<<"total pages of first book are :"<<pg_no1<<endl;
   cout<<"price of first book is :"<<price1<<endl;

   cout<<"---------------------------------------------------------" <<endl;
  cout<<"second book name is :"<<second<<endl;
   cout<<"total pages of second book are :"<<pg_no2<<endl;
     cout<<"price of second book is :"<<price2<<endl;

	cout<<"---------------------------------------------------------" ;

 cout<<"\n\tGreater Price";
 if(price1 >price2)
{
cout<<"book name is :"<<first<<endl;
}
else
{
cout<<"book name is :"<<second<<endl;
}
}

};
void main()
{

book b;
clrscr();

b.getdata();
b.putdata();
getch();
}

