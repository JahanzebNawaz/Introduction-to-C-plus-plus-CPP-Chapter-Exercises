/* program that inputs number from user and displays n fibonacci terms 
in Fibonacci sequence, sum of two successsive terms gives the third term; */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b,next,n,count;
	cout<<" how many Fibonacci terms required ";
	cin>>n;
	a=0;
	b=1;
	cout<<" Fibonacci terms are "<<end;
	cout<<a<<"\t"<<b;
	count=2;
	while(count<n)
	{
		next=a+b;
		cout<<"\t"<<next;
		count++;
		a=b;
		b=next;
	}
	getch();
}
