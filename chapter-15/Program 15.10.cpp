/* Program Of Inheritance */

#include<iostream>
#include<stdio.h>
using namespace std;

class Person
{
	protected:
		int id;
		char name[50], address[100];
		public:
			Person()
			{
				id=0;
				name[0]=0;
				address[0]=0;
			}
			
			void input()
			{
				cout<<"Enter id ";
				cin>>id;
				cout<<"Enter your Name ";
				cin>>name;
				cout<<"Enter your Address ";
				cin>>address;
			}
			
			void output()
			{
				cout<<"\n Personal Detail ";
				cout<<endl<<" ID : "<<id<<endl;
				cout<<" Name : "<<name<<endl;
				cout<<" Address : "<<address<<endl;
			}
};

class Student: public Person
{
	private:
		int rno,marks;
		public:
			Student()
			{
				Person::Person();
				rno=marks=0;
			}
			
			void input()
			{
				Person::input();
				cout<<"Enter Roll No : ";
				cin>>rno;
				cout<<"Enter Marks : ";
				cin>>marks;
			}
			
			void output()
			{
				Person::output();
				cout<<"\n Educational Information ";
				cout<<endl<<" Roll No : "<<rno<<endl;
				cout<<" Marks : "<<marks<<endl;
			}
};

class Scholarship: public Student
{
	private:
		char  sname[50];
		long amount;
		public:
			void input()
			{
				Student::input();
				cout<<"Enter Scholarship Name : ";
				cin>>sname;
				cout<<" Enter Amount : ";
				cin>>amount;
			}
			
			void output()
			{
				Student::output();
				cout<<"\n Scholarship Detail ";
				cout<<endl<<" Scholarship Name : "<<sname;
				cout<<endl<<" Scholarship Amount : "<<amount<<endl;
			}
};

main()
{
	Scholarship s;
	s.input();
	s.output();
}
