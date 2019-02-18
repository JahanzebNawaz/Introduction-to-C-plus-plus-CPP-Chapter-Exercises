/* write a program that stores five values in an array.
 it sorts the array using buble sort. it also displays the 
 values of unsorted and sorted array */
 
#include"iostream"
#include"conio.h"
using namespace std;

main()
{
	int arr[5],i,j,temp;
	
	for(i=0; i<5; i++)
	{
		cout<<" Enter a value :";
		cin>>arr[i];
	}
	
	cout<<" The original values in array : \n";
	for(i=0; i<5; i++)
	cout<<"array "<<i<<" "<<arr[i]<<" "<<endl;;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{ 
			if(arr[j]>arr[j+1])
			{
				
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		} 
		
	} 
	cout<<" \n The sorted Array : \n";
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	} 
	getch();
}

