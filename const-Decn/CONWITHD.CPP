//WAP to find the number is primenumber or not using constructor with default argument
#include<iostream.h>
#include<conio.h>
class prime
{
int a,k,i;
public:
prime(int x)
 {
   a=x;
  }
void calculate()
{
k=1;
{
 for(i=2;i<=a/2;i++)
 if(a%i==0)
 {
 k=0;
 break;
 }
 else
 {
 k=1;
 }
 }
 }
 void show()
 {
 if(k==1)
 cout<<"\n\tA is  Prime Number.";
 else
 cout<<"\n\t A is NonPrime";
 }

};
void main()
{
//clrscr();
int a;
cout<<"\n\tEnter the Number=";
cin>>a;

prime obj(a);
obj.calculate();
obj.show();
getch();
}

