/* write a program that inputs two intergers. it determines 
and prints if the first integer is a multiple of second integer */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b;
	cout<<"\n Enter 1st integer ";
	cin>>a;
	cout<<"\n  Enter 2nd Integer ";
	cin>>b;
	if(a%b==0)
	cout<<"\n 1st number is Multiple of 2nd ";
	else 
	cout<<"\n 1st number is not the Multiple of 2nd ";
	
	getch();
}
