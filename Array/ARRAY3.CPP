
//Display any 10 Number
#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],b;
int i;
clrscr();
cout<<"\n\tEnter the Value=";

for(i=0;i<10;i++)
{
 cin>>a[i];
 }
 for(i=0;i<10;i++)
 if(a[i]%2==0)
 {

  b=a[i]*a[i]*a[i];
  cout<<"\n\tCube of "<<a[i]<<"is"<<b;
}

else

{

  b=a[i]*a[i];
  cout<<"\t\t\t\t\t\t\t\t\t\t\nSquare of"<<a[i]<<"is"<<b<<endl;
}
 getch();
 }
