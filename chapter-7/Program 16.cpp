/* write a program that initializes a two Dimensional array
of 2 rows and 4 coloumns and then displays minimum and maximum 
number in array  */

#include<iostream>
#include<conio.h>
using namespace std; 

main()
{
	int i,j, min, max;
	int arr[2][4]={ {15,21,9,84},{33,72,18,47}};
	max=min=arr[0][0];
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<4; j++)
		{
			if(arr[i][j]>max)
			max=arr[i][j];
			if(arr[i][j]<min)
			min=arr[i][j];
		}
	}
	cout<<"Maxmimum = "<<max<<endl<<"Minimum = "<<min<<endl;
	getch();
	
	
	getch();
}
