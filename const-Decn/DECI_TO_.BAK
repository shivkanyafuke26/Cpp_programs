#include<iostream.h>
#include<conio.h>
void main()
{
 int num,a,i=0,b[10],j,k,bin[10];
 clrscr();
 cout<<"enter the number \n";
 cin>>num;
 a=num;
 while(a!=1)
 {
	if(a%2==1)
	{
	 b[i]=1;
	}
	else
	{
	 b[i]=0;
	}
   i=i+1;
	a=a/2;
  }
   bin[0]=1;

  for(j=i,k=1;j>=0;j--,k++)
  {
	bin[k]=b[j];
  }

  cout<<"binary form of "<<num<<" = ";
 // cout<<"1";
  for(k=0;k<=i;k++)
  {
	cout<<bin[k];
  }
//  cout<<"1";
  getch();
  }




