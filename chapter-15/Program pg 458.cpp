/* Multilevel inheritance with parameters */

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	private:
		int a;
		public:
			void set(int x)
			{
				a=x;
			}
			
			void out()
			{
				cout<<"The value of a : "<<a<<endl;
			}
};

class B: public A
{
	private:
		int b;
		public:
			void set(int y, int z)
			{
				A::set(y);
				b=z;
			}
			
			void out()
			{
				A::out();
				cout<<"The Value of b : "<<b<<endl;
			}
};

class C: public B
{
	private:
		int c;
		public:
			void set(int i, int j, int k)
			{
				B::set(i, j);
				c=k;
			}
			
			void out()
			{
				B::out();
				cout<<"The value of c : "<<c<<endl;
			}
};

main()
{
	C obj;
	obj.set(1,2,3);
	obj.out();
}
