/* Inheritance */

#include<iostream>
using namespace std;
void input(int);
void output(int);
class A
{
	protected:
		int id;
		public:
			A()
			{
				id=0;
			}
			
			void in();
};

void in(int id)
{
	cout<<"Enter id : ";
	cin>>id;
}

int main()
{
	A obj;
	obj.in();
	return 1;
}
