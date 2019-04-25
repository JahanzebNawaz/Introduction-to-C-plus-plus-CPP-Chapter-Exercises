/* Function Overriding */

#include<iostream>
#include<conio.h>
using namespace std;

class Parent
{
	protected:
		int n;
		public:
			Parent(int p)
			{
				n=p;
			}
			void show()
			{
				cout<<"n = "<<n<<endl;
			}
};

class Child: public Parent
{
	private:
		char ch;
		public:
			Child(char c, int m): Parent(m)
			{
				ch = c;
			}
			void show()
			{
				Parent::show();
				cout<<"Ch = "<<ch<<endl;
			}
};

main()
{
	Child obj('@', 100);
	obj.show();
	
}
