/*  Program */

#include<iostream>
using namespace std;

class A
{
	private:
		int  a;
		public:
			void in()
			{
				cout<<" Enter a ";
				cin>>a;
			}
			
			void out()
			{
				cout<<" A : "<<a<<endl;
			}
};

class B
{
	private:
		int b;
		public:
			void input()
			{
				cout<<"Enter b ";
				cin>>b;
			}
			
			void output()
			{
				cout<<" B : "<<b<<endl;
			}
};

class C: public A, public B
{
	private:
		int c;
		public:
			void get()
			{
				A::in();
				B::input();
				cout<<"Enter c ";
				cin>>c;
			}
			
			void show()
			{
				A::out();
				B::output();
				cout<<" C : "<<c<<endl;
			}
};

main()
{
	
	C obj;
	obj.get();
	obj.show();
}
