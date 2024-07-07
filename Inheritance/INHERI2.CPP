#include<iostream.h>
#include<conio.h>
class emp
{
private :int emp_id;
		 char nm[10];
public:void get()
	  {
	  cout<<"\n\t enter employe id &name: ";
	  cin>>emp_id>>nm;
	  }
	  void put()
	  {
	  cout<<"\n employe id: "<<emp_id;
	  cout<<"\n employe name: "<<nm;
	  }
}  ;
   class salary:public emp
{
private :int salary,bp,hra,da,pf,np;

public:void get2()
	  {
	  cout<<"\n\t enter employe salary,bp,hra,da,pf : ";
	  cin>>salary>>bp>>hra>>da>>pf;
	  }
	  void put2()
	  {
	  cout<<"\n employe salary: "<<salary;
	  cout<<"\n employe bp: "<<bp;
	  cout<<"\n hra: "<<hra;
	  cout<<"\n da: "<<da;
	  cout<<"\n pf: "<<pf;
	  np=salary+bp+hra+da+pf;
	  cout<<"np= "<<np;
	  }
}  ;
 void main()
 {
 salary s;
 clrscr();
 cout<<"\n enter employe details: ";
 s.get();
 s.put();
 cout<<"\n enter salary details: ";
 s.get2();
 s.put2();
 getch();
 }

