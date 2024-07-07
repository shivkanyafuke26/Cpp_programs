#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void create();
void display();
void add();
void search();
void delet();
void update();
void quit();

int no,ano,rno,no1,i,n,no2;

struct student
{
char name[20],midname[20],surname[20],course[20],city[20],gender[20];
int id,per;
}a[10];

void main()
{
char ch;
clrscr();

do
{
cout<<"\n MENU";
cout<<"\n 1.create";
cout<<"\n 2.display";
cout<<"\n 3.add";
cout<<"\n 4.search";
cout<<"\n 5.delet";
cout<<"\n 6.update";
cout<<"\n 7.quit";

cout<<"\n enter your choice as above :";
cin>>n;

switch(n)
{
case 1:
	   create();
	   break;
case 2:
	   display();
	   break;
case 3:
	   add();
	   break;
case 4:
	   search();
	   break;
case 5:
	   delet();
	   break;

  /* case 6  :
	  update();
	  break;
case 7:
	   exit();
	   break;*/

default:
 cout<<"\n your choice is wrong";

}

cout<<"\nDo u want to continue :-(Y/N)";
cin>>ch;
}
while(ch=='Y'||ch=='y');
getch();
}

void create()
{
cout<<"\n How many records u want to enter..??? :";
cin>>no;

cout<<"\n\n\t *****************INPUT RECORD IS ********************";
for(i=0;i<no;i++)
{
cout<<"\n enter id of student :";
cin>>a[i].id;
cout<<"\n enter first name of student :";
cin>>a[i].name;
cout<<"\n enter midle name of student :";
cin>>a[i].midname;
cout<<"\n enter surname of student :";
cin>>a[i].surname;
cout<<"\n enter city of student :";
cin>>a[i].city;
cout<<"\n enter course of student :";
cin>>a[i].course;
cout<<"\n enter gender of student :";
cin>>a[i].gender;
cout<<"\n enter percentage of student :";
cin>>a[i].per;
}
}
void display()
{
cout<<"\n display record of student :";
cout<<"\n ID   NAME   MIDNAME   SURNAME    CITY    COURSE     GENDER      PER";
  for(i=0;i<no;i++)
  {
   if(a[i].id!=0)
   {
   cout<<"\n"<<a[i].id;
   cout<<"  "<<a[i].name;
   cout<<"   "<<a[i].midname;
   cout<<"    "<<a[i].surname;
   cout<<"     "<<a[i].city;
   cout<<"      "<<a[i].course;
   cout<<"       "<<a[i].gender;
   cout<<"        "<<a[i].per;
   }
   cout<<endl;
  }
}
void add()
{
cout<<"\n How many records u want to add :";
cin>>ano;
rno=no+ano;

for(i=no;i<rno;i++)
{
cout<<"\n\t enter the id of student :";
cin>>a[i].id;
cout<<"\n\t enter first name of student :";
cin>>a[i].name;
cout<<"\n\t enter midle name of student";
cin>>a[i].midname;
cout<<"\n\t enter city of student";
cin>>a[i].city;
cout<<"\n\t enter coursr of student";
cin>>a[i].course;
cout<<"\n\t enter gender of student";
cin>>a[i].gender;
cout<<"\n\t enter percentage of student";
cin>>a[i].per;
no++;
}
}
void search()
{
cout<<"\n enter which record u want to search :";
cin>>no1;
cout<<"\n ID NAME MIDNAME SURNAME CITY COURSE GENDER PER :";
for(i=0;i<rno;i++)
{
	if(a[i].id==no1)
	{
	   cout<<"\n"<<a[i].id;
	 cout<<" "<<a[i].name;
	 cout<<"  "<<a[i].midname;
	 cout<<"   "<<a[i].surname;
	 cout<<"   "<<a[i].city;
	 cout<<" "<<a[i].course;
	 cout<<" "<<a[i].gender;
	 cout<<" "<<a[i].per;
   }
}
}
void delet()
{
int c=0;
cout<<"\n enter which record u want to delet :";
cin>>no2;
for(i=0;i<rno;i++)
{
if(a[i].id==no2)
{
a[i].id-0;
c=1;
}
}
if(c==1)
{
cout<<"\nrocord is deleted";
}
}





