/* friend class */

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	private:
		int a,b;
		public:
			A()
			{
				a=10;
				b=20;
			}
			
			friend class B;
};

class B
{
	public:
		void showA(A obj)
		{
			cout<<"the value of a : "<<obj.a<<endl;
			
		}
		
		void showB(A obj)
		{
			cout<<"the value of b : "<<obj.b<<endl;
		}
};

main()
{
	A x;
	B y;
	y.showA(x);
	y.showB(x);
	
}

