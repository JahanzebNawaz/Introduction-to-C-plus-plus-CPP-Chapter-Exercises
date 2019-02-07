/* write a program to display the values of different variables
using setfill manipulator */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	char str[]="OOP using C++ ";
	cout<<setw(20)<<setfill('*')<<str<<endl;
	cout<<setw(20)<<setfill('@')<<str<<endl;
	cout<<setw(20)<<setfill('=')<<str<<endl;
	getch();
	
}
