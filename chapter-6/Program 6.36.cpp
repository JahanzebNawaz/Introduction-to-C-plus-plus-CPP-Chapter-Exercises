/*  write a program that inputs two numbers and displays the
greater common divisior of both number */

#include<iostream>
using namespace std;

main()
{
	int n1, n2, d;
	cout<<"Enter the first number ";
	cin>>n1;
	cout<<"\n Enter the second number ";
	cin>>n2;
	
	d=(n1<n2)? n1:n2;
	for( ; d>=1; d--)
	if((n1%d==0)&& (n2%d==0))
	break;
	cout<<" GCD of "<<n1<<" and "<<n2<<" is "<<d;
}
