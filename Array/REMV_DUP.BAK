#include<iostream.h>
#include<conio.h>
void main()
{
int a[20],i,j,k,n,d=0;
clrscr();
cout<<"enter size of array= " ;
cin>>n;
cout<<"enter element\n";
 for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
 cout<<"array after removal of duplicate\n";
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;)
   {
	 if(a[j]==a[i])
	 {
	   for(k=j;k<n;k++)
	   {
		 a[k]=a[k+1];
	   }
	  n--;
	  d++;
	 }
	else
	{
	 j++;
	}
   }
 }
 cout<<"total duplicate = "<<d<<endl;
 cout<<"modified array = ";
  for(i=0;i<n;i++)
  {
   cout<<"  "<<a[i];
  }
   getch();
 }
