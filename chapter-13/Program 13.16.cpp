/* three objects of class Student
assign a unique roll no */

#include<iostream>
#include<stdio.h>
using namespace std;

class student
{
	private:
		static int r;
		int rno, marks;
		string name;
		public:
			student()
			{
				r++;
				rno=r;
			}
			
			void in()
			{
				cout<<"Enter name ";
				cin>>name;
				cout<<"Enter marks ";
				cin>>marks;
			}
			
			void show()
			{
				cout<<endl;
				cout<<"Roll No : "<<rno<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Marks : "<<marks<<endl;
			}
};


int student::r=0;

main()
{
	student a,b,c;
	a.in();
	b.in();
	c.in();
	a.show();
	b.show();
	c.show();
	
}

