/* program that inputs ten numbers from the user in array and display
the minmum numbers */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int arr[10],i,min;
	for(i=0;i<10;i++)
	{
		cout<<"enter numvalues ";
		cin>>arr[i];
	}
	min=arr[0];
	for(i=0; i<10;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	cout<<"Minimum value :"<<min;
	
}
