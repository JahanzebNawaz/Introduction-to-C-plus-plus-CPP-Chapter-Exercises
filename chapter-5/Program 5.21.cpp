/*  write a program that inputs a number and displays whether it 
is  ecen or odd by using logical operator ! */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n;
	cout<<"\n Enter a number ";
	cin>>n;
	if(!(n%2==0))
	cout<<"\n  You Entered Odd Number ";
	else
	cout<<"\n You Entered Even Number ";
	getch();
	
}
