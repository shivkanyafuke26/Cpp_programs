#include<iostream.h>
#include<conio.h>
class regular
{
public : int dw;
public:
void get1()
{
cout<<"\nEnter daily wages(regular): ";
cin>>dw;
}
void put1()
{
cout<<"\ndaily wages(regular): "<<dw;
}
};
class casual
{
public : int dw1;
public:
void get2()
{
cout<<"\nEnter daily wages(casual): ";
cin>>dw1;
}
void put2()
{
cout<<"\nDaily wages(casual): "<<dw1;
}
};
class typist:public regular,public casual
{
public : int speed;
public:
void get3()
{
cout<<"\nEnter typing speed: ";
cin>>speed;
}
void put3()
{
cout<<"\nTyping speed: "<<speed;
}
};
class teacher
{
public :char subject[10],publ[10];
public:
void get4()
{
cout<<"\nEnter subject and publication: ";
cin>>subject>>publ;

}
void put4()
{
cout<<"\nSubject: "<<subject;
cout<<"\nPublication: "<<publ;
}
};
class officer
{
public :char grade[2];
public:
void get5()
{
cout<<"\nEnter grade: ";
cin>>grade;
}
void put5()
{
cout<<"\nGrade: "<<grade;
}
};
class staff:public teacher,public typist,public officer
{
public :int code;char name[10];
public:
void get6()
{
cout<<"\nEnter code,name: ";
cin>>code>>name;
}
void put6()
{
cout<<"\ncode: "<<code;
cout<<"\nname: "<<name;
}
};
void main()
{
clrscr();
staff s;
s.get1();
s.get2();
s.get3();
s.get4();
s.get5();
s.get6();
s.put1();
s.put2();
s.put3();
s.put4();
s.put5();
s.put6();
getch();
}