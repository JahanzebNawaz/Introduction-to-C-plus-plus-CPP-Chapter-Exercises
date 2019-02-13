/* write a program that displays  the sum of the following 
series 
1+3+5+7+...100 */

#include<iostream>
using namespace std;
main()
{
	int sum=0;
	
	for(int i=1; i<100; i++)
	{
		if(i%2==0)
		continue;
		sum=sum+i;
	}
	cout<<"the sum is "<<sum;
}
