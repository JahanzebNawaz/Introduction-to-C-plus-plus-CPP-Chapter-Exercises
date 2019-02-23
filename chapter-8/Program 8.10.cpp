/* write a progarm that use two structures result an d reccord
and it finally displays the values of the result */

#include<iostream>
#include<conio.h>
using namespace std;

struct result
{
	int marks;
	char grade;
	
};

struct record
{
	int rno;
	result r;
};
main()
{
	record rec;
	cout<<" Enter Roll no : ";
	cin>>rec.rno;
	cout<<"Enter Marks : ";
	cin>>rec.r.marks;
	cout<<"Enter Grades : ";
	cin>>rec.r.grade;
	cout<<" Roll No "<<rec.rno<<endl;
	cout<<" Marks "<<rec.r.marks<<endl;
	cout<<" Grades "<<rec.r.grade<<endl;
	getch();
	
}
