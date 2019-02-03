/* write  a program that inputs a number from user and displays
 in square and sube */
 
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n,s,c;
	cout<<"\n\tEnter a number : ";
	cin>>n;
	
	s=n*n;
	c=n*n*n;
	cout<<"\n\t Square of number is equal to : "<<s;
	cout<<"\n\t Cube of number is equal to : "<<c;
	
	getch();
}
