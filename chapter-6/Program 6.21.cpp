/* program that get starting and ending number from user 
and displays all odd numbers in the given range  using do while 
looop */

#include<iostream>
using namespace std;

main()
{
	int c,s,e;
	cout<<"Enter a starting number ";
	cin>>s;
	
	cout<<"\n Enter an ending number ";
	cin>>e;
	
	c=s;
	do
	{
		if(c%2!=0)
		cout<<c<<endl;
		c=c+1;
	}
	while(c<=e);
	
}
