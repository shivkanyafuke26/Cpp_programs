/* C++ Polymorphism - Example Program */

#include<iostream.h>
#include<conio.h>
class BASE
{
	protected:
		int a;
		int b;
		int res;
	public:
		void setvar(int x, int y)
		{
			a=x;
			b=y;
		}
		virtual void op() = 0;
		int getresult()
		{
			return res;
		}
};
class ADD:public BASE
{
	public:
		void op()
		{
			res=a+b;
		}
};
class SUB:public BASE
{
	public:
		void op()
		{
			res=a-b;
		}
};
void main()
{
	clrscr();
	int m, n;
	BASE *bo;
	ADD ao;
	SUB so;
	cout<<"Enter two number: ";
	cin>>m>>n;

	bo=&ao;
	bo->setvar(m, n);
	bo->op();
	cout<<"\nResult of Summation: "<<bo->getresult();
	bo=&so;
	bo->setvar(m, n);
	bo->op();
	cout<<"\nResult of Subtraction: "<<bo->getresult();
	getch();
}
	 /*obj
	 obj.in();

	 *obj;
	 obj->in()



  int a,b;
  int *pa;

    *pa


    pa=&a;

    pa=&b
    .
    ->
	   */










