#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2][2],b[2][2][2],c[2][2][2],i,j,k;
	clrscr();
	printf("\n\t Enter first array elements :");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			for(k=1;k<=2;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("\n---------------------------------------");
	printf("\n\t Enter second array elements :");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			for(k=1;k<=2;k++)
			{
				scanf("%d",&b[i][j][k]);
			}
		}
	}
	printf("\n---------------------------------------");
	printf("\n\t addition of two array is :");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			for(k=1;k<=2;k++)
			{
				c[i][j][k]=0;
				c[i][j][k]=a[i][j][k]+b[i][j][k];
				printf("%d\t",c[i][j][k]);
			}
		}
	}
	printf("\n---------------------------------------");
getch();
}
