#include<iostream.h>
#include<conio.h>
void main()
{
 int a[20],i,s,n;
 clrscr();
 cout<<"enter no of element u want=\n";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>a[i];
  }
  cout<<"enter no u want to search\n";
  cin>>s;
  for(i=0;i<n;i++)
  {
	if(a[i]==s)
	{
	cout<<"no found at "<<(i+1)<<"th position";
	break;
	}
  }
  cout<<" not found";
  getch();
  }






