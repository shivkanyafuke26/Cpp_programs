#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	printf("Enter array elements:");
	for(i=1;i<=5;i++)
	{
		scanf("\n\t%d",&a[i]);
	}
	printf("\n\t REVERSE ORDER:");
	for(i=5;i>=1;i--)
	{
		printf("\n\t%d",a[i]);
	}
getch();
}
