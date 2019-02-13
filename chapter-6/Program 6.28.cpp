/* write a program that inputs value of X and range 
it then caclculates and prints the sum of all following series 
1 + 1/x + 1/x^2 + 1/x^3 + ... */

#include<iostream>
#include<math.h>
using namespace std;

main()
{
	int i,n,x;
	float sum=0, den;
	
	cout<<"Enter the value of x ";
	cin>>x;
	cout<<"\n enter the range ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		den=pow(x,i);
		cout<<" den is "<<den<<endl;
		sum=sum+(1/den);
		
	}
	
	cout<<" sum of series is "<<sum<<endl;
	
}
