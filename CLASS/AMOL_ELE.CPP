#include<iostream.h>
#include<conio.h>
void main()
{
int a=0,b=0,c=0,d=0,e=0,spoilt=0,i,vote,voters;
clrscr();
cout<<"5 candidate are contesting\n";
cout<<"________________________________________________";
cout<<"enter  1 for a\n";
cout<<"enter  2 for b\n";
cout<<"enter  3 for c\n";
cout<<"enter  4 for d\n";
cout<<"enter  5 for e\n";
cout<<"________________________________________________";
cout<<"enter  how many voters r there\n";
cin>>voters;
cout<<"enter the vote\n";
for(i=0;i<voters;i++)
{
cin>>vote;
switch(vote)
{
case 1:a++;
		break;
case 2:b++;
		break;
case 3:c++;
		break;
case 4:d++;
		break;
case 5:e++;
		break;
default:
	   spoilt++;
}
}
 cout<<"\t   result \n ";
 cout<<"a="<<a<<"\nb="<<b<<"\nc="<<c<<"\nd="<<d<<"\ne="<<e;
 cout<<"\n spoilt vote="<<spoilt;
 getch();
 }

