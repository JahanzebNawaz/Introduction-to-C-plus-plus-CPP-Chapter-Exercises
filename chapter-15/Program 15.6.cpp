/* program that declares two classes and defines a relationship between them using public inheritance */

#include<iostream>
#include<conio.h>
using namespace std;
class Parent 
{
	public:
		int a;
		protected:
			int b;
			private:
				int c;
};
 
class Child: public Parent
{
	public:
		void in()
		{
			cout<<"Enter a ";
			cin>>a;
			cout<<"Enter b ";
			cin>>b;
		}
		
		void out()
		{
			cout<<"\n A "<<a;
			cout<<"\n B "<<b;
		}
};

main()
{
	Child obj;
	obj.in();
	obj.out();
}
