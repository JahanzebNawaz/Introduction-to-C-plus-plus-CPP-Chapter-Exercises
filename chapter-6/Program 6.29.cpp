/* write a program that prints following series 
1 4 7 10 . . . 40 */

#include<iostream>
using namespace std;

main()
{
	int n=1, inc=3;
	cout<<" The series is as Follow : ";
	for(int i=1; n<=40; i++)
	{
		cout<<n<<"\t";
		n=n+inc;
	}
	
	
}
