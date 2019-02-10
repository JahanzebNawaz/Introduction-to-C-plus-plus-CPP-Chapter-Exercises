/* write aprogram that inputs marks of a student and displays
Pass if marks are more than 40 and Fail ottherwise by using conditional operator */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int marks;
	cout<<"Enter marks ";
	cin>>marks;
	cout<<"Result is "<<(marks>=40 ? "Pass" : "Fail");
	getch();
}
