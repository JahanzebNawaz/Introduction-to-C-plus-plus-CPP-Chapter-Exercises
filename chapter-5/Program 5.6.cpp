/* write a program that inputs a number and determines 
whether it is positice negativeor 0, */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n;
	cout<<" \n Enter a number ";
	cin>>n;
	if(n>0)
	cout<<"\n Number is positive ";
	if(n<0)
	cout<<"\n Number is Negative ";
	if(n==0)
	cout<<"\n Number is  Zero ";
	
	getch();
}
