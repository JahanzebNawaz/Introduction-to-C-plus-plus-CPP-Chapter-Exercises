/* write a program that inputs 4 numbers and calculates the sum, average,
and product of all the numbers */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,d,sum,product;
	float avg;
	cout<<"\n Enter 1st number : ";
	cin>>a;
	cout<<"\n Enter 2nd number :";
	cin>>b;
	cout<<"\n Enter 3rd number :";
	cin>>c;
	cout<<"\n Enter 4th number :";
	cin>>d;
	sum=a+b+c+d;
	product=a*b*c*d;
	avg=sum/4.0;
	cout<<"\n\t Sum of all numbers : "<<sum<<endl;
	cout<<"\n\t Product of All numbers : "<<product<<endl;
	cout<<"\n\t Average of all numbers : "<<avg<<endl;
	
	getch();
}
