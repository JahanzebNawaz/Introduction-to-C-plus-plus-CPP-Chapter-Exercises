/* Program */

#include<iostream>
#include<conio.h>
using namespace std;
class simple
{
	protected:
		int a,b;
		public:
			simple()
			{
				a=b=0;
			}
			void in()
			{
				cout<<"Enter a : ";
				cin>>a;
				cout<<"Enter b : ";
				cin>>b;
			}
			void add()
			{
				cout<<"a + b = "<<a+b<<endl;
			}
			void sub()
			{
				cout<<"a - b = "<<a-b<<endl;
			}
			void mul()
			{
				cout<<"a * b = "<<a*b<<endl;
			}
			void div()
			{
				cout<<"a / b = "<<a/b<<endl;
			}
};

class complex:public simple
{
	public:
		void add()
		{
			if(a<=0 || b<=0)
			cout<<"invalid value... ";
			else 
			simple::add();
		}
		void sub()
		{
			if(a<=0 || b<=0)
			cout<<"invalid value.. ";
			else
			simple::sub();
		}
		void mul()
		{
			if(a<=0 || b<=0)
			cout<<"Invalid value .. ";
			else 
			simple::mul();
		}
		void div()
		{
			if(a<=0 || b<=0)
			cout<<"invalid value..";
			else
			simple::div();
		}
};

main()
{
	complex obj;
	
	obj.in();
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
}
