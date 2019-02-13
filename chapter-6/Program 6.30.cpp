/* write a program that print following numnber 
1 -4 -7 -10 . . . -40 */

#include<iostream>
using namespace std; 
main()
{
	int a=1, i,p, inc=3;
	cout<<" The series ";
	for(i=1; a<=40; i++)
	{
		if(i%2==0)
		{
			p=-a;
			cout<<p<<" ";
		}
		else
		cout<<a<<" ";
		a=a+inc;
	}
}
