/* program that gets two numbers from the user and displays 
the result of first number to the power of second second number 
using do while loop */

#include<iostream>
using namespace std;
main()
{
	int a,b,c,r;
	cout<<"enter a number ";
	cin>>a;
	cout<<"\n enter a number ";
	cin>>b;
	c=1;
	r=1;
	do
	{
		r=r*a;
		c=c+1;
	}
	while(c<=b);
	cout<<" Result is "<<r;
}
