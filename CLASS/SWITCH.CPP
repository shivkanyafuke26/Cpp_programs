//switch
#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,ch,ans;
clrscr();

cout<<"\n\t 1.addition"<<endl;
cout<<"\n\t 2.subtraction"<<endl;
cout<<"\n\t 3.multiplication"<<endl;
cout<<"\n\t 4.division"<<endl;
cout<<"\n\t 5.module"<<endl;
cout<<"\n\t enter your choice";
cin>>ch;
switch(ch)
{

case 1:
cout<<"\n\tenter any two numbers";
cin>>a>>b;
ans=a+b;
cout<<"\n\taddition is :"<<ans<<endl;
break;

case 2:
cout<<"\n\tenter any two numbers";
cin>>a>>b;
ans=a-b;
cout<<"\n\tsubtraction is :"<<ans<<endl;
break;

case 3:
cout<<"\n\tenter any two numbers";
cin>>a>>b;
ans=a*b;
cout<<"\n\tmultiplication is :"<<ans<<endl;
break;

case 4:
cout<<"\n\tenter any two numbers";
cin>>a>>b;
ans=a/b;
cout<<"\n\tdivision is :"<<ans<<endl;
break;

case 5:
cout<<"\n\tenter any two numbers";
cin>>a>>b;
ans=a%b;
cout<<"\n\tmodule is :"<<ans<<endl;
break;
}
getch();
}
