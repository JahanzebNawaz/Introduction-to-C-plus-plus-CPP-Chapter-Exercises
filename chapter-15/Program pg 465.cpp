/* Program */

#include<iostream>
using namespace std;

class A
{
	private:
		int a;
		public:
			void show()
			{
				cout<<" Class A ... ";
				
			}
};

class B
{
	public:
		void show()
		{
			cout<<"class B ... ";
		}
};

class C: public A, public B
{
	public:
		void show()
		{
			A::show();
			B::show();
			cout<<" Class C ... ";
		}
};

main()
{
	C obj;
	obj.show();
	
}
