/* write a program that displays the values of different variables 
using setprecision manipulator */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	double r, n1=132.364,n2=26.91;
	r=n1/n2;
	cout<<r<<endl;
	cout<<setprecision(5)<<r<<endl;
	cout<<setprecision(4)<<r<<endl;
	cout<<setprecision(3)<<r<<endl;
	cout<<setprecision(2)<<r<<endl;
	cout<<setprecision(1)<<r<<endl;
	getch();
}
