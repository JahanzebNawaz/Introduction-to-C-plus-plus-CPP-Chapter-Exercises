/* write a program that inputs three numbers and displays the 
smallest number by using nested if condition */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b,c;
	cout<<"\n Enter Three Number ";
	cin>>a>>b>>c;
	if(a<b)
	if(a<c)
	cout<<a<<" is smallest ";
	else
	cout<<c<<" is smallest ";
	else 
	if(b<c)
	cout<<b<<" is smallest ";
	else
	cout<<c<<" is smallest ";
	getch();
	
}
