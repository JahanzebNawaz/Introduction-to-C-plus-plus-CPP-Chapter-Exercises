/* write a program that inputs total number of students in a class
and fee per student . it diplays total fee collected from the 
students */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int students, fee;
	long total;
	
	cout<<"\n\t Enter Fee per Student : ";
	cin>>fee;
	cout<<"\n\t Enter No of students in a class : ";
	cin>>students;
	total=students*fee;
	cout<<"\n\t Total Fee = "<<total<<endl;
	getch();
}
