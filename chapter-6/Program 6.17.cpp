/* program that inputs a number anf checks if it is Fabonacci
number or not */


#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b,next,n;
	cout<<"Enter a number ";
	cin>>n;
	if(n==0 || n==1)
	cout<<n<<" is a Fibonacci number ";
	else 
	{
		a=0;
		b=1;
		next=a+b;
		while(next<n)
		{
			a=b;
			b=next;
			next=a+b;
		}
		if(next==n)
		cout<<n<<" Is Fibonacci number ";
		else
		cout<<n<<" Is not a Fibonacci number ";	
	}
	getch();
}
