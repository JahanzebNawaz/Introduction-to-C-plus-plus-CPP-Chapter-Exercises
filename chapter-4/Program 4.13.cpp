/* write a program that inouts two numbers, swaps the values  and
then displays them */


#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b,temp;
	cout<<"\n enter 1st number :";
	cin>>a;
	cout<<"\n enter 2nd number :";
	cin>>b;
	cout<<"\n you entered "<<a<<" and "<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n Values after swapping are "<<a<<" and "<<b<<endl;
	getch();
}
