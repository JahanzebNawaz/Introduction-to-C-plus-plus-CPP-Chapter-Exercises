/* Program of Accessing Member Functiuon of parent class */

#include<iostream>
#include<conio.h>
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
				id = 0;
				name[0]='\0';
				address[0]='\0';
			}
			
			void getinfo()
			{
				cout<<"Enter Id of Person : ";
				cin>>id;
				cout<<"Enter Name of Person : ";
				cin>>name;
				cout<<"Enter Address of Person : ";
				cin>>address;
			}
			
			void showinfo()
			{
				cout<<endl<<"\n Your Personal information is as Follows : \n";
				cout<<"ID : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Address : "<<address<<endl;
				
			}
};

class Student: public Person
{
	private:
		int rno, marks;
		public:
			Student()
			{
				Person();
				rno=marks=0;
			}
			
			void getedu()
			{
				cout<<"\n Enter Roll No of Student : ";
				cin>>rno;
				cout<<"\n Enter Marks of Student : ";
				cin>>marks;
			}
			
			void showedu()
			{
				cout<<"\n Your Education Detail is as Follow : \n ";
				cout<<" Roll No : "<<rno<<endl;
				cout<<" Marks : "<<marks<<endl;
			}
	
};

main()
{
	Student s;
	s.getinfo();
	s.getedu();
	s.showinfo();
	s.showedu();
}
