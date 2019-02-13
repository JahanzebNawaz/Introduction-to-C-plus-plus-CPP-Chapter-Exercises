/* program that inputs starting and ending numbers form 
the user and displays all even numbers in the given range 
using while loop */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n,s,e;
	cout<<" Enter a starting number ";
	cin>>s;
	cout<<"\n Enter a ending number ";
	cin>>e;
	
	n=s;
	while(n<=e)
	{
		if(n%2==0)
		cout<<n<<endl;
		n++;
	}
	getch();
}
