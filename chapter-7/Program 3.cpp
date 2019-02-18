/* program that inputs five values from the user , stores them in an array 
and displays the sum and average of these values */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int arr[5],i,sum;
	float avg=0.0;
	for(int i=0; i<5; i++)
	{
		cout<<" Enter values ";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	avg=sum/5.0;
	cout<<"Sum : "<<sum<<endl;
	cout<<" Avg :"<<avg<<endl;
	getch();
}
