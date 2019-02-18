/* program that inputs ten numbers from the user in an array and display
the maximum number */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int arr[10],i,max;
	for(i=0;i<10;i++)
	{
		cout<<" Enter Value ";
		cin>>arr[i];
	}
	max=arr[0];
	for(i=0; i<10; i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	cout<<"maximum value : "<<max;
}
