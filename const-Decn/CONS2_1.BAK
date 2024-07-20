#include<iostream.h>
#include<string.h>
#include<conio.h>
class string
{
 char *name;
 int length;
 public:
	string()
	{  length=0;
	name=new char[length+1];
	}
	string(char *s)
	{   length=strlen(s);
	    name=new char[length+1];
	   strcpy(name,s);
	}
	void display()
	{
	 cout<<name<<endl;
	 }
	 void add(string &a,string &b)
	 {
	    length=a.length+b.length;
	    delete name;
	    name= new char[length+1];
	    strcpy(name,a.name);
	    strcat(name,b.name);
	  }
};
	  void main()
	  {  clrscr();
	   char *p,*q,*r;
	   cout<<"enter 3 strings \n";
	   cin>>p>>q>>r;
	   string name1(p),name2(q),name3(r),s1,s2;
	   s1.add(name1,name2);
	   s2.add(s1,name3);
	   name1.display();
	   name2.display();
	   s1.display();
	   s2.display();
	   getch();
	   }








