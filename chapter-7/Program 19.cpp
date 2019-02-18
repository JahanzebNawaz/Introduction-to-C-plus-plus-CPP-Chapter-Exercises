/* write a program that inputs intergers values in a 4x4  matrix and 
displays the sum of diagonal elements of all matrix */


#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int x,y;
	int A[4][4], sum=0;
	cout<<"Enter the element of the matrix :"<<endl;
	for(y=0; y<4; y++)
	{
		for(x=0; x<4; x++)
		{
			cout<<" Element "<<x+1<<" , "<<y+1<<" : ";
			cin>>A[x][y];
		}
	}
	//sum of either of the diagonal elements.
	for(x=0; x<4; x++)
	{
		for(y=0; y<4; y++)
		{
			if(x==y)
			sum+=A[x][y];
		}
	}
	cout<<"Sum of the diagnoal elements is : "<<sum;
	getch();
}
