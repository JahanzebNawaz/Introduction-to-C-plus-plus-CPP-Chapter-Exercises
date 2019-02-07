/* write a program that explains the use of setw and endl 
statement */

#include<iostream>
#include"conio.h"
#include"iomanip"
using namespace std;
main()
{
	int n=3928;
	double d=91.5;
	char str[]="OOP using C++";
	cout<<"("<<setw(5)<<n<<")"<<endl;
	cout<<"("<<setw(8)<<d<<")"<<endl;
	cout<<"("<<setw(16)<<str<<")"<<endl;
	getch();
}
