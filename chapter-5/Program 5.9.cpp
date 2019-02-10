/* write a program that inputs a year and finds wether it is a 
leap year or not using if else */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int y;
	cout<<"\n Enter year ";
	cin>>y;
	if(y%4==0)
	cout<<"\n Is a leap year ";
	else
	cout<<"\n Is not a leap year ";
	getch();
}

