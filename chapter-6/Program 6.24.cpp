/* write a program that displays product of all odd numbers 
from 1 to 10 using for loop */

#include<iostream>
using namespace std;

main()
{
	long int product=1;
	int c;
	
	for(c=1;c<=10;c=c+2)
	{
		product=product*c;
		cout<<" Result is "<<product<<endl;
	}
}
