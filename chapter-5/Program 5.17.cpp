/*  write a program that inputs three numbers and displays wehtre 
all numbers are equal or not by using neested if else */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b,c;
	cout<<"\n Enter three number ";
	cin>>a>>b>>c;
	if(a==b)
	if(a==c)
	cout<<"\n All numbers are equal ";
	else 
	cout<<"\n Numbers are Different ";
	else 
	cout<<"\n Numbers are Different ";
	getch();
}
