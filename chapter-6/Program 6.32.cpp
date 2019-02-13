/* write a program that inputs an interger and prints if it is 
prime  or composite. a number is prime number if it hhas factors 1 
and itself otherwise it is a composite number */


#include<iostream>
using namespace std;

main()
{
	int c, num, p=1;
	cout<<" Enter an interger :";
	cin>>num;
	for(c=2; c<=num/2; c++)

		if(num%c==0)
		{
			p=0;
			break; }
		if(p==1)
		cout<<num<<"is a prime number ";
		else
		cout<<num<<" is a composite number ";
	
}
