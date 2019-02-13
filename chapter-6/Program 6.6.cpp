/* inputs from user and displays the sum of its digits
for example displays 9 if user inputs 135 */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,a,r, sum=0;
	cout<<"Enter a number ";
	cin>>n;
	a=n;
	while(n!=0)
	{
		r = n%10;
		if(r==0)
		sum=sum+n;
		else 
		sum=sum+r;
		n=n/10;
		cout<<sum<<endl;
	
	}
	cout<<"The Sum of Digits of "<<a<<" = "<<sum;
	getch();
}
