#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b,hcf=0,lcm,i;
 clrscr();
 cout<<"enter 2 numbers =\n";
 cin>>a>>b;
// if((a<0)&&(b<0))
// {cout<<"invalid  input";
//break;
// }
 for(i=1;i<=(a+b)/2;i++)
 {
   if((a%i==0)&&(b%i==0))
   {  hcf=i;
   }
 }
 lcm=(a*b)/hcf;
  cout<<"hcf and lcm of "<<a<<" and "<<b<<" are "<<hcf<<" and "<<lcm;
  getch();
  }














