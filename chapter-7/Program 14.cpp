/* write a program that inputs intergers in 2_D array 
of 2 rows and 4 coloumns */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int arr[2][4],i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<"Enter an Intergers : ";
			cin>>arr[i][j];
		}
	}
	
	for(i=0; i<2; i++)
	{
		
		for(j=0; j<4; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	getch();
}
