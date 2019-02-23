/* write a program that declares a structure to store day, month
and year of birth date. it inputs three values and displays date of birth 
in dd/mm/yy formate */

#include<iostream>
#include<conio.h>
using namespace std;

struct birth
{
	int day;
	int month;
	float year;
};

 main()
{
	birth a;
	
	cout<<"Enter day of birth : ";
	cin>>a.day;
	cout<<"\n Enter month of birth : ";
	cin>>a.month;
	cout<<"\n Enter year of birth  : ";
	cin>>a.year;
	cout<<" \n\n\t\t Your Date of Birth is  "<<a.day<<"/"<<a.month<<"/"<<a.year;
	
	getch();
}
