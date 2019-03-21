/* Arithmetics Operators */

#include<iostream>
using namespace std;

class Add
{
	private:
		int a,b;
		public:
			Add()
			{
				a=b=0;
			}
			
			void in()
			{
				cout<<"enter value of a : ";
				cin>>a;
				cout<<"enter value of b : ";
				cin>>b;
				
			}
			
			void show()
			{
				cout<<" a : "<<a<<endl;
				cout<<" b : "<<b<<endl;
			}
			
			Add operator +(Add p)
			{
				Add temp;
				temp.a=p.a+a;
				temp.b=p.b+b;
				return temp;
			}
};

main()
{
	Add x,y,z;
	
	x.in();
	y.in();
	
	z=x+y;
	
	x.show();
	y.show();
	z.show();
}
