/* program that inputs a number in main function and passes the number to a function
the function displays the factorial of that number */ 

#include<iostream>
#include<conio.h>
using namespace std;
void factorial(int n);
main()
{
	int num;
	cout<<"Enter a number ";
	cin>>num;
	factorial(num);
	getch();
}
void factorial(int n)
{
	int i;
	long fact;
	fact= 1;
	for(i=1; i<=n; i++)
	{
		fact*=i;

	}
			cout<<" Factorial of "<<n<<" is "<<fact;
}
