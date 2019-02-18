/* write a program that inputs five integers from the user and stores 
them in an array. it then displays all values in array using loop */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<" Enter an integer : ";
		cin>>arr[i];
	}
	
	cout<<"\n the values in array are :\n";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<endl;
	}
	getch();
}
