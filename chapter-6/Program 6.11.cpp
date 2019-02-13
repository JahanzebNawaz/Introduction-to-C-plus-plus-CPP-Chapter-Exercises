/* inputs number and checks whether it is an armstrong number
or not. armstrong numbre if the sum of subes of its digits is 
equal to the number itself. 
example 371 is an armstrong number since 3p3 + 7p3 + 1p3 = 371 */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int num,n,r,sum;
	cout<<" Enter a number ";
	cin>>num;
	n=num;
	sum=0;
	while(n!=0)
	{
		r=n%10;

		sum=sum+(r*r*r);
		n/=10;	
	
	}
	if(sum==num)
	cout<<num<<" Is an armstrong number "<<endl;
	else
	cout<<num<<" is not an armstrong number "<<endl;
	getch();
}
