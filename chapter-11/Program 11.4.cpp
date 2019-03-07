/* initialization pointer */

#include<iostream>
using namespace std;

main()
{
	int a;
	int *p = &a;
		
	cout<<"Enter an integer : ";
	cin>>*p;
	cout<<" You entered : "<<*p<<endl;

}
