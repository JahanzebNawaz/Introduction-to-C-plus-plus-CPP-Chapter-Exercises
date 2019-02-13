/* write a program that displays first five numbers and
their sum using while loop */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,sum;
	n=1;
	sum=0;
	while(n<=5)
	{
		cout<<n<<endl;
		sum=sum+n;
		n++;
	}
	cout<<" Sum is "<<sum;
	getch();
}
