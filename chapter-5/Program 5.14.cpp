/* write a program taht inputs radius and users choice. it 
calculates area of cicle if user enters 1 as choice, it calculates
circumference if the user enters 2 as choice; */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	float area, radius, circum;
	int choice;
	cout<<"Enter Radius ";
	cin>>radius;
	cout<<"\n Enter 1 for area and 2 for circumference ";
	cin>>choice;
	if(choice==1)
	{
		area=radius*radius*3.141;
		cout<<"\n Area "<<setprecision(2)<<area;
	}
	else if(choice==2)
	{
		circum=2.0*3.141*radius;
		cout<<"\n Circumference "<<setprecision(2)<<circum;
	}
	else 
	cout<<"\n Invalid Choice ";
	getch();
}
