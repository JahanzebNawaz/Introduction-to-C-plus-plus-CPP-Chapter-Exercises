/* write a program that will prompt the user to enter the current 
rates of electricity, gas and petrol per unit . give each item 
rate an increment of 10%. compute and display the new price per 
unit of electricity gas and petrol */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	float e1,e2,g1,g2,p1,p2;
	cout<<"\n Enter current rate of electricity : ";
	cin>>e1;
	cout<<"\n Enter current rate of Petrol : ";
	cin>>p1;
	cout<<"\n Enter current rate of Gas : ";
	cin>>g1;
	e2=e1*1.1;
	g2=g1*1.1;
	p2=p1*1.1;
	cout<<"\n New Elecctricity rate "<<e2;
	cout<<"\n New Gas rate "<<g2;
	cout<<"\n New Petrol rate "<<p2;
	getch();
	}
