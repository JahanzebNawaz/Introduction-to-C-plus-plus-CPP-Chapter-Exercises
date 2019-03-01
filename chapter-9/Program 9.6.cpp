/* program that check the numnber is prime number, even number or odd number using function */

#include<iostream>
#include<conio.h>
using namespace std;
void chk_number(int n)
{
	int c=0, i;
	for(i=2; i<n; i++)
	{
		if(n%i==0)
		c=1;
	}
	if(n%2==0 && c==0)
	{
		cout<<n<<" Is a prime even number ";
	}
	else if (n%2!=0 && c==0)
	{
		cout<<n<<" is a odd prime number ";
	}
	else if(n%2==0 && c!=0)
	{
		cout<<n<<" is only an even number , not prime";
	}
	else if(n%2!=0)
	{
		cout<<n<<" is only an odd number, not prime ";
	}
	else
	{
		cout<<n<<" Is not a prime Number";
	}
}

main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	cout<<"\n Nature of Number \n";
	cout<<"\n--------------------\n";
	chk_number( n);
	getch();
}
