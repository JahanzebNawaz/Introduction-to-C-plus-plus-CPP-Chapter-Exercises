/* write a program that inputs base and height from the user . 
it calculates and displays the erea of a triange by using the 
formula */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	float base,height;
	double area;
	cout<<" \n enter base : ";
	cin>>base;
	cout<<"\n enter height : ";
	cin>>height;
	area=0.5*base*height;
	cout<<"\n\t Area = "<<setprecision(2)<<area;
	getch();
}
