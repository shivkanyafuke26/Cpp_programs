#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 int len;
 char str[40];
 cout<<"enter string\n";
 cin.get(str,40);
 len=strlen(str);
 for(int i=0;i<len;i++)
 {
   if(str[i]==' ')
   { str[i]='_';
   }
  }
  cout<<"modified string\n";
  cout<<str;
  getch();
  }