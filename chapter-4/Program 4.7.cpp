/* write a program that display the values  of differnet variables
using showpoint manipulator */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	double x,y,z;
	x=15.674;
	y=235.73;
	z=9525.9864;
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);
	cout<<setprecision(2)<<"setprecision 2 "<<endl;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<setprecision(3)<<"setprecision 3 "<<endl;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<setprecision(4)<<"setprecision 4"<<endl;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<setprecision(3)<<x<<" ";
	cout<<setprecision(2)<<y<<" "<<setprecision(4)<<z<<endl;
	getch();
}
