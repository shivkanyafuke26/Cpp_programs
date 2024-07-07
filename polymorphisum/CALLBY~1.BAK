#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y;

 void swap(int *x,int *y);
 x=77;y=88;
   clrscr();
  printf("\n\tValue before swap:");
  printf("\n\tX=%d",x);
  printf("\n\tY=%d",y);

      swap(&x,&y);  //call by referance

  printf("\n\tValue After swap:");
  printf("\n\tX=%d",x);
  printf("\n\tY=%d",y);
  getch();
  }
      void swap(int *x,int *y)
      {
      int temp;
      temp=*x;
      *x=*y;
      *y=temp;
      }
