	 //single inheritance
	 #include<iostream.h>
	 #include<conio.h>
	 class emp
	 {
	 protected:int id;
		    char nm[20];
	public:
		void get1()
		{
		 cout<<"Enter emp Id and Name="<<endl;
		 cin>>id>>nm;
		 }

	 void put1()
	 {
	 cout<<"Emp_id="<<id<<endl;
	 cout<<"Emp_Name="<<nm<<endl;
	 }
	 };




	 class fitness:private emp
	 {
	  int h,w;
	   public:void get()
	   {
	    get1();
	   cout<<"Enter the Height And Weight=";
	   cin>>h>>w;
	   }
	   void put()
	   {
	   put1();
	   cout<<"Height="<<h<<endl;
	   cout<<"weight="<<w<<endl;
	   }

	   };
	   void main()
	   {
	    fitness f;
	    clrscr();
	    cout<<"enter the employee details"<<endl;
	   // f.get1();
	    f.get();
	    cout<<"enter the employee details are"<<endl;
	    //f.put1();
	    f.put();
	    getch();											    getch();
	    }