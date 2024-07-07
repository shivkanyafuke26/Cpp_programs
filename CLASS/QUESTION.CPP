u#include<iostream.h>
#include<conio.h>
class myquestions
{
public: int sd;
	int count;

public:
void q1()
{
count=0;
cout<<"\n* Which of below is not datatype ???";
cout<<"\n 1.INT \n 2.CHAR \n 3.FLOAT \n 4.SWITCH \n Ans:- ";
cin>>sd;
	switch(sd)
	{
	case 1:
	case 2:
	case 3: cout<<"\nWrong";
	break;
	case 4: cout<<"\nRight answer \1";
		count++;
		break;

	}
}
void q2()
{

cout<<"\n* Which of below is valid variable ???";
cout<<"\n 1.1var \n 2.2var \n 3.$var \n 4._var \n Ans:- ";
cin>>sd;
	switch(sd)
	{
	case 1:
	case 2:
	case 3: cout<<"\nWrong";
	break;
	case 4: cout<<"\nRight answer \1";
	 count++;
	 break;
	}
}
void q3()
{
cout<<"\n* Which of below is tilled sign ???";
cout<<"\n 1.$ \n 2.& \n 3.~ \n 4.* \n Ans:- ";
cin>>sd;
	switch(sd)
	{
	case 1:
	case 2:
	case 4: cout<<"\nWrong";
	break;
	case 3: cout<<"\nRight answer \1";
	       count++;
	       break;
	}
}
  void q4()
{
cout<<"\n* Which of below is  datatype ???";
cout<<"\n 1.INT \n 2.if \n 3.for \n 4.SWITCH \n Ans:- ";
cin>>sd;
	switch(sd)
	{
	case 4:
	case 2:
	case 3: cout<<"\nWrong";
	break;
	case 1: cout<<"\nRight answer \1";
	count++;
	break;
	}

}
void a1()
{
cout<<"\ncorrect answers:"<<count;
}

};
void main()
{
myquestions m;
clrscr();
m.q1();
m.q2();
m.q3();
m.q4();
m.a1();
getch();
}