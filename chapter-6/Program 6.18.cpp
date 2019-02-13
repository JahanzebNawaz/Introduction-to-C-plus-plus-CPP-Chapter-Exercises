/* write a program that displays bacck counting 
from 10 to 1 */

#include<iostream>
using namespace std;
main()
{
	int c;
	c=10;
	
	do{
		cout<<"\t"<<c<<endl;
		c=c-1;
	}
	while(c>=1);
}
