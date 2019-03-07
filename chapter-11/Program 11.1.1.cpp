#include<iostream>
using namespace std;

main()
{
	int a;
	int *p;
	cout<<"Enter value of a : ";
	cin>>a;
	p=&a;
	cout<<"Vlaue of a : "<<a<<endl;
	cout<<"Address of a : "<<p<<endl;
}
