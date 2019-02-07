/* write a program that converts a persons height from 
inches to centimeters using the formula */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	int height;
	float height_cent;
	cout<<"\nenter height : ";
	cin>>height;
	height_cent=height*2.54;
	cout<<"\n height in centimeters = ";
	cout<<setprecision(2)<<height_cent;
	getch();
}
