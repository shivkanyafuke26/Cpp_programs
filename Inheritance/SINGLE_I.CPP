#include<iostream.h>
#include<conio.h>
class product
{
  private:
	  int product_id;
	  char name[20];
  public:
	 void get()
	 {
	  cout<<"enter the name  and id of product\n";
	  cin>>name>>product_id;
	 }
	 void put()
	 {
	  cout<<"\n\nprodut name and id are ="<<name<<"\t"<<product_id;
	 }
};
 class edible:public product
 {
  protected:
	    int weight,price;
	    char flavour[10];
   public:
	  void get1()
	  {
	    product::get();
	    cout<<"enter the weight , price and flavour :\n" ;
	    cin>>weight>>price>>flavour;
	  }
	  void put1()
	  {

	    product::put();
	    cout<<"\nweight,price and flavour of product :\n"<<weight<<"\t"<<price<<"\t"<<flavour;
	  }
  };
  void main()
  {
   edible a;
   clrscr();
   a.get1();
   a.put1();
   getch();
  }














