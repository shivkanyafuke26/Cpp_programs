#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
 char s1[25];
 public:
	int len,i;
	void in()
	{
	 cout<<"\n\t Enter first string :";
	 cin>>s1;
	}
	void operator+(string obj)
	{
	 len=strlen(s1);
	 i=0;


	 v '[;;;;while(s1[i]!='\0')
	 {
	  s1[len]=obj.s1[i];
	  len++;
	  i++;
	 }
	 cout<<"\n\t concatinated string ="<<s1;
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


