/* program that declares a structure to store marks and grades
of a student . it defines two structures variables . it inputs 
the values in one variable and assigns that value to the 
other variable. and displays the values of both . */

#include<iostream>
#include<conio.h>
using namespace std;

struct marks
{
	int m;
	char g;
};

main()
{
	marks a,b;
	cout<<"enter marks ";
	cin>>a.m;
	cout<<"\nEnter grade ";
	cin>>a.g;
	
	b=a;
	cout<<endl;
	cout<<"The First Record is as follow :\n";
	cout<<" Marks : "<<a.m<<endl;
	cout<<" Grades : "<<a.g<<endl;
	cout<<" The Second  Record is as follow : \n";
	cout<<" Marks : "<<b.m<<endl;
	cout<<" Grade : "<<b.g<<endl;
	getch();
	
}
