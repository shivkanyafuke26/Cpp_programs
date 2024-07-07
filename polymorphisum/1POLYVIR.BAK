#include<iostream.h>
#include<conio.h>
class employee
{
int e_id;
char nm[20];

public:
 void in()
 {
 cout<<"\n\tEnter the employee id and name:";
 cin>>e_id>>nm;
 }
 virtual void out()
 {
 cout<<"Employee Id:"<<e_id<<"Employee Name:"<<nm<<endl;
 cout<<"\n\t******************************************************"<<endl;
 }
};
 class programmer:public employee
 {
 int p_id;
char p_nm[20];

public:
 void in1()
 {
 cout<<"\n\tEnter the programmer id and name:";
 cin>>p_id>>p_nm;
 }
 void out()
 {
 cout<<"programmer Id:"<<p_id<<"programmer Name:"<<p_nm<<endl;
 cout<<"\n\t**********************************************************"<<endl;
 }
 };
 class manger:public employee
 {
 int sal;
 public: void acc()
 {
 cout<<"\n\tEnter the salary of manager:";
 cin>>sal;
 }
 void out()

 {
 cout<<"Salary="<<sal<<endl;
 cout<<"\n\t************************************************************"<<endl;
 }
 };
 void main()
 {
 employee e,*bptr;
 clrscr();
 bptr=&e;
 cout<<"\nBase Class Function Input and output data:";
 bptr->in();
 bptr->out();

 programmer p,*dptr;
 bptr=&p;
 dptr=&p;
 cout<<"first direved class input and output function:";
 dptr->in1();
 dptr->out();

 manger m,*ptr;
 bptr=&m;
 ptr=&m;
 cout<<"second dreived class input and output function:";
 ptr->acc();
 ptr->out();
 getch();
}
