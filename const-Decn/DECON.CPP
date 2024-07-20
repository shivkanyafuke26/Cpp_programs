#include<iostream.h>
#include<conio.h>
int count=0;
class alpha
{
 public:
 alpha()
 {
  count++;
  cout<<count<<"\tno of objects created"<<endl;
 }
 ~alpha()
 {
 cout<<"\n no of objects destroyed"<<count;
}
};

void main()
{
clrscr();
cout<<"\n\ enter main\n";
alpha A1,A2,A3,A4;
{
cout<<"\n\nenter bloack 1\n";
alpha A5;
}
{
cout<<"\n\nenter block\n";
alpha A6;
}
cout<<"\n\nrenter main\n";
//return 0;
    getch();
}
