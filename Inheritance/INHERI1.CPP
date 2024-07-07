#include<iostream.h>
#include<conio.h>
class employe
{
private :int employe_id;
		 char nm[10];
public:void get()
	  {
	  cout<<"\n\t enter employe id &name: ";
	  cin>>employe_id>>nm;
	  }
	  void put()
	  {
	  cout<<"\n employe id: "<<employe_id;
	  cout<<"\n employe name: "<<nm;
	  }
}  ;
   class fitness:public employe
{
private :int height,weight;

public:void get2()
	  {
	  cout<<"\n\t enter employe height &weight: ";
	  cin>>height>>weight;
	  }
	  void put2()
	  {
	  cout<<"\n employe height: "<<height;
	  cout<<"\n employe weight: "<<weight;
	  }
}  ;
 void main()
 {
 fitness f;
 cout<<"\n enter employe details: ";
 f.get();
 f.put();
 cout<<"\n enter fitness details: ";
 f.get2();
 f.put2();
 getch();
 }

