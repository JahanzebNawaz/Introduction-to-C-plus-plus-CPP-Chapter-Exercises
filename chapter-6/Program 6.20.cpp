/* program that inputs a number and checks whether it is a 
palindrome or not. a palindrome is a number that reads 
the same backwards as forwards such as 62526 and 4994 */

#include<iostream>
using namespace std;

main()
{
	long int n, num, digit, rev=0;
	cout<<"Enter a positive number ";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	while(num!=0);
	cout<<" the reverse of the number is "<<rev<<endl;
	if (n==rev)
	cout<<"the number is a Palindrome ";
	else
	cout<<"number is not Palindrome ";
	
	
}
