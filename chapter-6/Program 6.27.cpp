/* write a program that inputs number form the user and prints 
the lowest number and the highest number */

#include<iostream>
using namespace std;

main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	int num=n;
	int high=n%10;
	int low=n%10, rem;
	cout<<"\n high "<<high<<endl;
	cout<<" low "<<low<<endl;
	n=n/10;
	cout<<" value of n "<<n<<endl;
	
	for(int i=n; i>=1; i=i/10)
	{
		rem=i%10;
		if(rem>high)
		high=rem;
		if(rem<low)
		low=rem;
	}
	cout<<"\n the highest value of "<<num<<" is "<<high;
	cout<<"\n the lowest value of "<<num<<" is "<<low;
	
}
