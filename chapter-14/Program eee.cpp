/* Inheritance */

#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	protected:
		int id;
		public:
			A()
			{
				id=0;
			}
			
			void in()
			{
				cout<<"Enter id of A ";
				cin>>id;
			}
			void output()
			{
				cout<<"Your Id of A "<<id<<endl;
			}
};

class B: public A
{
	protected:
		int id;
		public: 
		B()
			{
				id=0;
			}
			
			void in()
			{
				A::in();
				cout<<"Enter id of B ";
				cin>>id;
			}
			void output()
			{
				A::output();
				cout<<"Your Id of B "<<id<<endl;
			}
};

class E: public B
{
	protected:
		int id;
		public:
			E()
			{
				id=0;
			}
			
			void in()
			{
			
				cout<<"Enter id of E ";
				cin>>id;
			}
			void output()
			{
				cout<<"Your Id of E "<<id<<endl;
			}
};

class D: public E
{
	protected:
		int id;
		public:
			D()
			{
				id=0;
			}
			
			void in()
			{
				E::in();
				cout<<"Enter id of D ";
				cin>>id;
			}
			void output()
			{
				E::output();
				cout<<"Your Id of D "<<id<<endl;
			}
};

class I:public E
{
	protected:
		int id;
		public:
			I()
			{
				id=0;
			}
			
			void in()
			{
				E::in();
				cout<<"Enter id of I  ";
				cin>>id;
			}
			void output()
			{
				E::output();
				cout<<"Your Id of I "<<id<<endl;
			}
};

class H: public E
{
	protected:
		int id;
		public:
			H()
			{
				id=0;
			}
			
			void in()
			{
				E::in();
				cout<<"Enter id of H ";
				cin>>id;
			}
			void output()
			{
				E::output();
				cout<<"Your Id of H "<<id<<endl;
			}
};

class G: public E
{
	protected:
		int id;
		public:
			G()
			{
				id=0;
			}
			
			void in()
			{
				E::in();
				cout<<"Enter id of G  ";
				cin>>id;
			}
			void output()
			{
				E::output();
				cout<<"Your Id of G "<<id<<endl;
			}
};

class J:public G
{
	protected:
		int id;
		public:
			J()
			{
				id=0;
			}
			
			void in()
			{
				G:in();
				cout<<"Enter id of J ";
				cin>>id;
			}
			void output()
			{
				G::output();
				cout<<"Your Id of J "<<id<<endl;
			}
};

class C: public A
{
	protected:
		int id;
		public:
			C()
			{
				id=0;
			}
			
			void in()
			{
				A::in();
				cout<<"Enter id of C ";
				cin>>id;
			}
			void output()
			{
				A::output();
				cout<<"Your Id of C "<<id<<endl;
			}
};

class F:public C
{
	protected:
		int id;
		public:
			F()
			{
				id=0;
			}
			
			void in()
			{
				C::in();
				cout<<"Enter id of F";
				cin>>id;
			}
			void output()
			{
				C::output();
				cout<<"Your Id of F "<<id<<endl;
			}
};






main()
{
	F obj;
	J obj2;
	obj.in();
	
	cout<<endl;
	obj2.in();
	
	cout<<endl;
	obj2.output();
	obj.output();
	getch();
}

