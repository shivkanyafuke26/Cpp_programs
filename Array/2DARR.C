#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	clrscr();
	printf("\n\t Enter first array elements:");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("\n\t%d",&a[i][j]);
		}
	}
	printf("\n\t Enter second array elements:");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("\n\t%d",&b[i][j]);
		}
	}
	printf("\n\t Addition of matrix is:");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			c[i][j]=0;
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
	}

getch();
}