//faculty detail using multilevel inheritance
#include<iostream.h>
#include<conio.h>
#include<string.h>
class art
{
private:
	char f1[10],f2[10];
	int stud1,stud2;

public:  void get1()
	{
	 cout<<"\n\t enter any two faculty of arts :";
	 cin>>f1>>f2;
	 cout<<"\n\ttotal student in faculty one :";
	 cin>>stud1;
	 cout<<"\n\ttotal student in faculty two :";
	 cin>>stud2;
	}
	void put1()
	{
	 cout<<"\n\tfaculty 1 is :"<<f1;
	 cout<<"\n\t total student is :"<<stud1;
	 cout<<"\n\tfaculty 2 is :"<<f2;
	 cout<<"\n\t total student is :"<<stud2<<endl;
	 cout<<"\n\t--------------------------------------------:";

	}
   };
class com: public art
{
private: char f3[10],f4[10];
	char scop1[10],scop2[10];

public: void get2()
	{
	 cout<<"\n\t enter two faculty of commerce :";
	 cin>>f3>>f4;
	 cout<<"\n\tscope of first faculty is :";
	 cin>>scop1;
	 cout<<"\n\tscope of second faculty is :";
	 cin>>scop2;
       }

       void put2()
       {
	cout<<"\n\tfirst faculty of commerce is :"<<f3<endl;
	cout<<"scope is :"<<scop1<<endl;
	cout<<"\n\tsecond faculty of commerce is :"<<f4<<endl;
	cout<<"scope is :"<<scop2<<endl;
	cout<<"\n\t-----------------------------------------------";
      }
};

class science: public com
{
private: char f5[10],f6[10],f7[10];
	double  f1,f2,f3;

public: void get3()
	{
	cout<<"\n\tenter any three faculty of science :";
	cin>>f5>>f6>>f7;
	cout<<"\n\tenter fees of faculty one,two and three :"<<endl;
	cin>>f1>>f2>>f3;
	}

	void put3()
	{
	cout<<"\n\t first faculty of science is :"<<f5;
	cout<<"\n\tfees is :"<<f1<<endl;
	cout<<"\n\t second faculty of science is :"<<f6;
	cout<<"\n\tfees is :"<<f2<<endl;
	cout<<"\n\t third faculty of science is :"<<f7<<endl;
	cout<<"\n\tfees is :"<<f3<<endl;
       }
};

void main()
{
science s;
clrscr();
cout<<"\n\t INFORMATION OF ART,COMMARCE & SCIENCE :"<<endl;
s.get1();
s.get2();
s.get3();
cout<<"\n\t D E T A I L   I N F O "<<endl;
s.put1();
s.put2();
s.put3();

getch();
}





