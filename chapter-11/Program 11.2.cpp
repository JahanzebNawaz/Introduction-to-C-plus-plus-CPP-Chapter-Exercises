/* void pointer */

#include<iostream>
using namespace std;

main()
{
	int a=10;
	float f= 25.18;
	char c='&';
	
	void *ptr;
	ptr=&a;
	cout<<"value of a : "<<a<<endl;
	cout<<"address of a : "<<ptr<<endl;
	
	ptr=&f;
	cout<<"value of f : "<<f<<endl;
	cout<<"address of f : "<<ptr<<endl;
	
	ptr=&c;
	cout<<"value of c : "<<c<<endl;
	cout<<"address of ptr : "<<ptr<<endl;
}
