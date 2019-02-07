/* write a program that inputs even and odd numbers
through keyboard multiplies even with 5 and odd with 
3 and add both results. it subtracts the ressult from 1000
and finally prints the ddifference */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int ev,od,r;
	cout<<"\n Enter even number ";
	cin>>ev;
	cout<<"\n Enter odd number  ";
	cin>>od;
	r=1000-((ev*5)+(od*3));
	cout<<"\n Difference = "<<r;
	getch();
}
