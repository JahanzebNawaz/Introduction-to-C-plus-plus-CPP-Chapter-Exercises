/* write a program that inputs a number and finds wether it is 
even or odd using if else structure */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	if(n%2==0)
	cout<<"\n Number is Even "
	else
	cout<<"\n Number is Odd ";
	getch();
}
