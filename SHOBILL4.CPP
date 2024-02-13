#include<iostream.h>
#include<conio.h>
class bill
{
public:
float t1,t2,t3,t,q;
int bn,d,y,h,n,f,u,pq1,pp1,pq2,pp2,pq3,pp3;
char cn[10],m[5],pnm1[10],pnm2[10],pnm3[10];
public:
void in()
{
clrscr();
cout<<"\n\tenter bill no:";
cin>>bn;
cout<<"\n\tenter day:";
cin>>d;
cout<<"\tenter month:";
cin>>m;
cout<<"\tenter year:";
cin>>y;
cout<<"\tenter hour:";
cin>>h;
cout<<"\tenter minute:";
cin>>n;
cout<<"\tenter cust name:";
cin>>cn;
cout<<"\tproduct price 1:";
cin>>pp1;
cout<<"\tproduct quality 1:";
cin>>pq1;
cout<<"\titem name 1:";
cin>>pnm1;
cout<<"\tproduct price 2:";
cin>>pp2;
cout<<"\tproduct quality 2:";
cin>>pq2;
cout<<"\titem name 2:";
cin>>pnm2;
cout<<"\tproduct price 3:";
cin>>pp3;
cout<<"\tproduct quality 3:";
cin>>pq3;
cout<<"\titem name 3:";
cin>>pnm3;
}
void out()
{
t1=pq1*pp1;
t2=pq2*pp2;
t3=pq3*pp3;
t=t1*t2*t3;
q=pq1*pq2*pq3;
clrscr();
cout<<"\n\t\t\t\5 SHRI GAJANAN BHOJNALAYA \5";
cout<<"\n\t\t\tMAMA CHOWK JALNA-431203";
cout<<"\n\tFSIS NO:1234455667887767543";
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\t***********************CASH BILL************************";
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\tDT:"<<m<<"/"<<d<<"/"<<y<<"\t@"<<h<<":"<<n<<"\t\tBILL NO:"<<bn;
cout<<"\n\tTABLE:"<<f<<"\tUDN:"<<u<<"\t\tNAME:"<<cn;
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\tSR_NO.\tITEM\t\tQTY\tPRICE\tTOTAL";
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\t1\t"<<pnm1<<"\t\t"<<pq1<<"\t"<<pp1<<"\t"<<t1;

cout<<"\n\t2\t"<<pnm2<<"\t\t"<<pq2<<"\t"<<pp2<<"\t"<<t2;
cout<<"\n\t3\t"<<pnm3<<"\t\t"<<pq3<<"\t"<<pp3<<"\t"<<t3;
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\tNITEMS:3\t\tNQTY:"<<q;
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\tSUBTOTAL\t\t"<<t;
cout<<"\n-------------------------------------------------------------------";
cout<<"\n\tGRAND TOTAL:"<<t;
cout<<"\n-------------------------------------------------------------------";
}
};
void main()
{
clrscr();
bill s;
s.in();
clrscr();
s.out();
getch();
}