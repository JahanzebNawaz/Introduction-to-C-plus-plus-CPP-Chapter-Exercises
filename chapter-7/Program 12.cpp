/* write a program that inputs from the user in an array 
and then sorts this array in ascending order */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int arr[5],i,j,min, temp;
	
	for(i=0; i<5; i++)
	{
		cout<<" Enter  Value :";
		cin>>arr[i];
	}
	cout<<" The Orignal values in array : \n";
	for(i=0; i<5; i++)
	cout<<arr[i]<<" ";
	
	for(i=0; i<4; i++)
	{
		min=i;
		for(j=i+1; j<5; j++)
		if(arr[j]<arr[min])
		min=j;
		
		if(min != i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		
	}
	
	cout<<"\n The sorted array : \n";
	for(i=0; i<5; i++)
	cout<<arr[i]<<"  ";
	getch();
}
