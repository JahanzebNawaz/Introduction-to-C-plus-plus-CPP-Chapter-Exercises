/* write a program that inputs a five-digit number as 
input and reverse the number */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	long n,a,b,c,d;
	cout<<"\n\t Enter 5 Digit number : ";
	cin>>n;
	a=n/10000;
	n=n%10000;
	b=n/1000;
	n=n%1000;
	c=n/100;
	n=n%100;
	d=n/10;
	n=n%10;
	cout<<"\n\t Number in reverse order is "<<n<<d<<c<<b<<a;
	getch();
}
