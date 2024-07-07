#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
char s1[20];
public: int len,len1,i;
void in()
  {
    cout<<"\n\tEnter the string=";
    cin>>s1;
  }
void operator>(string b)
{
    while(s1[i]!=' ')
   {
	len++;
	//i++;
   }

if(s1[len]>len)
{
cout<<"\n\t first string is big";
}
else
{
cout<<"\n\ second string is big";
}
}
};
void main()
{
clrscr();
 string ob1,ob2;

 ob1.in();
 ob2.in();
 ob1>ob2;
 getch();
 }