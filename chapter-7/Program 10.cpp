/* write a program that a user inputs a value and it searches
in an array */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i,n,loc=-1;
	cout<<" Enter a value to search :";
	cin>>n;
	for(i=0; i<=10; i++)
	{
		if(arr[i]==n)
	loc=i;}
	if(loc==-1)
	cout<<" \n Value not found in array ";
	else
	cout<<"\n Value found at index "<<loc;
	
	getch();
}
