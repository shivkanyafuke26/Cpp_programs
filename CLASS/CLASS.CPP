#include<iostream.h>
#include<conio.h>
class item
{
int itno;
float cost,tot_cost;
  public:
  void getdata(void)
  {
  cout<<" enter itemno & cost"<<endl;
  cin>>itno>>cost;
  }
  void tot(item,item);
  };
  void item::tot(item it,item it1)
  {
  tot_cost=it.cost+it1.cost;
  cout<<"total costis="<<tot_cost;
  }
  void main()
  {
  item a,b,c;
  clrscr();
  a.getdata();
  b.getdata();
  c.tot(a,b);

  getch();
  }

