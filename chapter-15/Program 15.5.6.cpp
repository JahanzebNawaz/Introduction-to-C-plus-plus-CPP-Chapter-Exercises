/* Multilevel Inheritance */

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	private:
		int a;
		public:
			void in()
			{
				cout<<"Enter a ";
				cin>>a;
			}
			 void out()
			 {
			 	cout<<"\n Value of A "<<a<<endl;
			 }
};

class B: public A
{
	private:
		int b;
		public:
			void in()
			{
				A::in();
				cout<<"Enter value of b ";
				cin>>b;
			}
			
			void out()
			{
				A::out();
				cout<<"\n Value of B "<<b<<endl;
			}
};

class C: public B
{
	private:
		int c;
		public:
			void in()
			{
				B::in();
				cout<<"Enter value of C ";
				cin>>c;
			}
			
			void out()
			{
				B::out();
				cout<<" Enter value of C "<<c<<endl;
			}
};

main()
{
	C obj;
	obj.in();
	obj.out();
	
}

