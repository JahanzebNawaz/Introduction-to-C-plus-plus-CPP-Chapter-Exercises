/* Write a program that inputs radius of sphere from user. 
it calculates its volume and surface area using the formula 
Area = 4pieR2 and circumference = 4/3pieR3 where pie=3.14 */

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

main()
{
	float r, area, cir;
	system("cls");
	cout<<"Enter radius : ";
	cin>>r;
	area=4.0*3.14*r*r;
	cir= (4.0/3.0)*3.14*r*r;
	cout<<"\n Area is "<<setprecision(4)<<area<<endl;
	cout<<"\n circumference is "<<setprecision(2)<<cir;
	getch();
}
