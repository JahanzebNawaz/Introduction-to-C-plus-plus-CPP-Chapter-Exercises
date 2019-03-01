/* a progarm that enter a number and displays its precessor and successor
numbers using function */

#include<iostream>
#include<conio.h>
using namespace std;
void value(int);
main()
{
	int x;
	cout<<"enter a number ";
	cin>>x;
	value(x);
	getch();
}

void value(int x)
{
	int p,n;
	p= x-1;
	n= x+1;
	cout<<"the number before "<<x<<" is "<<p<<endl;
	cout<<"the number after "<<x<<" is "<<n<<endl;
}
