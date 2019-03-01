/* write a program that enters a number in main function and passess
the number to a funvtion , the function displays a table of that number */

#include<iostream>
#include<conio.h>
using namespace std;
 void table(int n);
main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	table(num);
	getch();
}

void table(int n)
{
	int c;
	for(c=1; c<=10; c++)
	{
		cout<<n<<" * "<<c<<" = "<<n*c<<endl;
	}
}
