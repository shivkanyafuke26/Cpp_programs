#include<conio.h>
#include<iostream.h>
class Emp
{
 protected :
  int id;
  char nm[15];

  public :
	  void get1()
	  {
	  cout<<"Enter the Employee Id n Name:";
	  cin>>id>>nm;
	  }
	  void put1()
	  {
	  cout<<"Employee Id="<<id<<endl;
	  cout<<"Employee Name="<<nm<<endl;
	  }
	  };
   class fitness:public Emp
   {
   protected :float




f