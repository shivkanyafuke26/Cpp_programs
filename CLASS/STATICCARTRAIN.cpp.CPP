//Static data member static member function
#include<iostream.h>
#include<conio.h>
class abc
{
public:
      static float km,b;
      int ch1;
      char s[10],d[10],ch;
      static float pkm;

public:

     static void car();
     static void train();

     void travel()
     {
     cout<<"\n\t\t Travelling Info..";
     cout<<"\n---------------------------------";
     cout<<"\n\t Enter Source		:";
     cin>>s;
     cout<<"\t Enter Destination	:";
     cin>>d;
     cout<<"\n\t\t MENU ";
     cout<<"\n----------------------------------";
     cout<<"\n\t 1] Car		c/C";
     cout<<"\n\t 2] Train	t/T";
     cout<<"\n\tEnter Your Choice :";
     cin>>ch;

      if(ch=='c'||ch=='C')
	{
	abc::car();
	}

	else
	if(ch=='t'||ch=='T')
	{
	abc::train();
	}
	else
	{
	cout<<"\n\tWrong Choice";
	}
     }

     void show()
     {
     }

    };

     void abc::car()
     {
     cout<<"\n\t U Select Car" ;
     cout<<"\t Enter Kilometer	:";
     cin>>km;
     pkm=16;
     cout<<"\n\t Per Kilometer ="<<pkm;
     b=km*pkm;
     cout<<"\n\t Travelling Charges :"<<b;

     }
     void abc::train()
     {
	  cout<<"\n\t U Select Train" ;
	  cout<<"\t Enter Kilometer	:";
	  cin>>km;

	  pkm=0.90;
	  cout<<"\n\t Per Kilometer ="<<pkm;

	  b=km*pkm;
	  cout<<"\n\t Travelling Charges :"<<b;
     }

float abc::pkm=0.0;
float abc::km=0.0;
float abc::b=0.0;
void main()
{
abc o;
clrscr();
o.travel();
o.show();
getch();
}

