#include<iostream.h>
#include<conio.h>
class student
{
int r_no;
char name[20];
public:
void get1()
{
cout<<"enter r_no &name: ";
cin>>r_no>>name;
}
void put1()
{
cout<<"\nr_no: "<<r_no;
cout<<"\nname: "<<name;
}
};
class test:public student
{
public:
int m1,m2,m3;
public :
void get2()
{
cout<<"\nenter m1,m2,m3:\t ";
cin>>m1>>m2>>m3;
}
void put2()
{
cout<<"\nm1: "<<m1;
cout<<"\nm2: "<<m2;
cout<<"\nm3: "<<m3;
}
};
class result:public test
{
int total;
float avg;
public :
void get3()
{
total=m1+m2+m3;
cout<<"\ntotal= "<<total;
 avg=total/3;
 cout<<"\navg= "<<avg;
 if(avg>=90)
 {

 cout<<"\ncongo!!! A grade";
 }
 else if(avg<90&&avg>=80)
 {
 cout<<"\nB grade";
 }
  else if(avg<80&&avg>=60)
 {
 cout<<"\nC grade";
 }
  else
 {
 cout<<"\nD grade";
   }
}  ;
void put3()
{
cout<<"\ntotal: "<<total;
cout<<"\navg: "<<avg;
}
};
void main()
{
result s;
clrscr();
s.get1();
s.put1();
s.get2();
s.put2();
s.get3();
s.put3();
getch();
}
