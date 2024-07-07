#include<iostream.h>
#include<conio.h>
#include<string.h>
 struct stud
 {
  int rno,m1,m2,total;
  char nm[10];
  float avg;
 }s;

void main()
{
clrscr();
cout<<"enter roll number of student";
cin>>s.rno;

/*cout<<"enter name of student";
cin>>s.nm[10];
   */
cout<<"enter marks of subject";
cin>>s.m1;

cout<<"enter marks of two subject";
cin>>s.m2;

s.total=s.m1+s.m2;
 cout<<"total marks are :"<<s.total<<endl;

 s.avg=s.total/2;
 cout<<"avg marks are :"<<s.avg;

getch();
}