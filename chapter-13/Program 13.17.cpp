/* friend function */

#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
		public:
			A()
			{
				a = 10;
			}
			
			friend void show(A,B);
};

class B
{
	private:
		int b;
		public:
			B()
			{
				b = 20;
			}
			
			friend void show(A,B);
};


void show(A x,B y)
{
	int r;
	r=x.a+y.b;
	cout<<"Value of class A obj : "<<x.a<<endl;
	cout<<"Vlaue of class B obj : "<<y.b<<endl;
	cout<<"Sum of both are : "<<r<<endl;
}

main()
{
	A obj1;
	B obj2;
	show(obj1,obj2);
	
}
