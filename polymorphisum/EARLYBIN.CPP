
//Early binding(static) compiletime polymorphism

#include<iostream.h>
#include<conio.h>
class sq
{
protected:
	 int x;
public:void get();
	 void put();
	 int area();
};
    class Rect:public sq
    {
    protected:
		int y;
    public :    void get();
		void put();
		int area();
  };
    void sq::get()
    {
    cout<<"\n\tEnter the value of x=";
    cin>>x;
    }
    void sq::put()
    {
    cout<<x<<endl;
    }
    int sq::area()
    {
    int temp=x*x;
    cout<<"\n\tArea of sq=" <<temp<<endl;
    return(temp);
    }
     void Rect::get()
    {
    cout<<"\nSides of x and y=" ;
    cin>>x>>y;
    }
    void Rect::put()
    {
    cout<<y<<endl;
    }
    int Rect::area()
    {
    int temp=x*y;
    cout<<"\n\tArea of Rectanle="<<temp;
    return(temp);
    }
    void main()
    {
    sq obj;
    Rect robj;
    clrscr();
    sq *ptr,*ptr1;
    ptr=&obj;
    ptr1=&robj;
    ptr->get();
    ptr->area();
    ptr1->get();
    ptr1->area();
    getch();
  }
