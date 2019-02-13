/* Program that inputs from the user and displays a table 
of that number using while loop */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n,c;
	c=1;
	cout<<"\n Enter a number ";
	cin>>n;
	while(c<=10)
	{
		cout<<n<<" * "<<c<<" = "<<n*c<<endl;
		c++;
	}
	getch();
}
