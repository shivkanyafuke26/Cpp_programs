 #include<iostream.h>

 #include<conio.h>
 class dist
 {

   private:
	  float d1,d2,d3;
  public:
       dist(float x,float y)
      {
	d1=x;
	d2=y;
	d3=0;
       cout<<"\n\t Cons.Invoked";
       cout<<"\n\t Dist1="<<d1;
       cout<<"\n\t Dist2="<<d2;
      }

   void sum();
   void display();

    ~dist()
	{
    cout<<"\n\t Dest invoked .";
    }
  };

    void dist::sum()
    {
     d3=d1+d2;
     }

     void dist::display()
     {
     cout<<"\n\t Addition of 2 Distance="<<d3;
     }

     void main()
     {
    //dist d1;
    dist d1(10.9,15.9);
    // clrscr();




      d1.sum();
      d1.display();

      getch();
      }







