/* Program that inputs a post=itive number . it then displays 
the sum of all odd numbers and the sum of all even number from 
1 to number entered bu the user */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,oddsum=0,evensum=0;
	cout<<"Enter a postive number  ";
	cin>>n;
	while(n>=0)
	{
		if(n%2==0)
		evensum=evensum+n;
		else
		oddsum=oddsum+n;
		n--;
	}
	cout<<"The sum of even digits is "<<evensum<<endl;
	cout<<"The sum off odd digits is "<<oddsum<<endl;
	getch();
}
