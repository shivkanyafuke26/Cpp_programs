#include<iostream.h>
#include<conio.h>
class stud4
{
private:
		int r;
		char nm[20];
public:
    void get()
    {
  cout<<"\n\t Enter the student roll Num=";
  cin>>r;
  cout<<"\n\t enter the name of student=";
  cin>>nm;
  }
  void put()
  {
   cout<<"Stud Roll Num="<<r<<endl;
   cout<<"Stud Name="<<nm<<endl;
   }
  };

   void main()
   {
    stud4 s[3];        //array of object
    clrscr();
    for(int i=0;i<3;i++)
    {

    s[i].get();

    s[i].put();
      cout<<"--------------------------------------------------"<<endl;
    }
    getch();
    }
