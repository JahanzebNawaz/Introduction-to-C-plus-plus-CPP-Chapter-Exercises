/* dereferencce operator */

#include<iostream>
using namespace std;

main()
{
	int a,b,s , *p1, *p2;
	
	p1=&a;
	p2=&b;
	
	cout<<"Enter value in a ";
	cin>>*p1;
	cout<<"Enter value in b ";
	cin>>*p2;
	 s=*p1+*p2;
	 
	 cout<<*p1<<" + "<<*p2<<" = "<<s<<endl;
}
