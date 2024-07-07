#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
char s1[20];

public:
   int len,i;
   void in()
   {
   cout<<"\n\tEnter the string=";

   cin>>s1;
   }
   void operator+(string obj)
   {
   len=strlen(s1);
   i=0;
   while(s1[i]!= '\0')
   {
   s1[len]=obj.s1[i];
   len++;
   i++;
   }
   cout<<"\n\t Concatenated string="<<s1;
   }
   };
   void main()
   {
   string ob1,ob2;
   clrscr();
	    ob1.in();
	    ob2.in();
	    ob1+ob2;
	    getch();
	    }
