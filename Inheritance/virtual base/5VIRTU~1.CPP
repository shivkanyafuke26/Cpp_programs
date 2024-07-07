#include <iostream.h>
#include <conio.h>
class product
{
       protected:
			   char name[10];
			   int price;
       public:
			   void in()
		      {
			     cout<<"Enter Name : ";
			     cin>>name;
			     cout<<"Enter Price : ";
			     cin>>price;
		      }
			  void disp()
		     {
			   cout<<"Name is : "<<name;
			   cout<<"\nPrice : "<<price<<'\n';
		     }
};
class warehouse: virtual public product
{
 protected:
      char wname[10];
 public:
       void inl()
	{
	 cout<<"Name of the Warehouse having the Product : ";
	 cin>>wname;
	 }
	void disp()
	{
	   cout<<"Warehouse name=" <<wname;
	 }
	 };
  class stax : virtual public product //virtual base class
	   {
   protected:
	     int staxl;
   public:
	   void in2()
      {
	     cout<<"Sales Tax : ";
	     cin>>staxl;
	}
	    void disp()
	     {
	     cout<<"Sales Tax : "<<staxl<<'\n';
	     }
	};
  class totprice : public warehouse, public stax
    {
    public:
	    void disp()
	  {
	     product::in();
	     warehouse::inl();
	    stax::in2();
	    product:: disp();
	    warehouse::disp();
	    stax::disp();
	  }
  };
	 void main()
      {
       clrscr();
       totprice p1;
       p1.disp();
       getch();
       }
