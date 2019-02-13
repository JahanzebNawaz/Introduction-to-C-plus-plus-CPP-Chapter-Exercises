/* displays the sum of following series using While loop 
1+1/2+1/4+1/6+---+1/100 */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float c,r;
	c=2.0;
	r=1.0;
	while(c<=100)
	{
		r=r+1.0/c;
		c=c+2;
		
	}
	cout<<" Result is "<<r;
	getch();
}
