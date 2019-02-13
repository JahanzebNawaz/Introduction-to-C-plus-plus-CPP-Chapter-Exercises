/* write a program that finds the sum of the squares of integers 
from 1 to n, where n is the number entered by user . */

#include<iostream>
using namespace std;

main()
{
	int n,c;
	long int sum=0;
	cout<<"Enter a number ";
	cin>>n;
	
	for(c=1;c<=n;c++)
	{
		sum=sum+(c*c);
		cout<<" Sum is "<<sum<<endl;
	}
}
