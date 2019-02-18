/* write a program that inputs the number of rows and columns from the users. 
it then inputs the elements to store in the matrix. >>>>> it also calculates the 
sum of the diagonal element and displays it on screen */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int A[10][10],m,n,x,y, sum=0;
	// create a Matrix A;
	cout<<"Enter number of rows and columns in Matrix A : \n";
	cin>>n>>m;
	
	cout<<" Enter Elements of Matrix A :\n";
	for(x=1; x<n+1; ++x)
	{
		for(y=1; y<m+1; ++y)
		{
			cin>>A[x][y];
		}
	}
	//find sum of each row
	
	for(x=1; x<n+1; ++x)
	{
		A[x][m+1]=0;
		for(y=1; y<m+1; ++y)
		{
			A[x][m+1]=A[x][m+1]+A[x][y];
		}
	}
	// find sum of each columns 
	for(y=1; y<m+1; ++y)
	{
		A[n+1][y]=0;
		for(x=1; x<n+1; ++x)
		{
			A[n+1][y]+=A[x][y];
		}
	}
	
	cout<<"\n Matrix A, Row Sum And  Column Sum : \n";
	for(x=1; x<n+1; ++x)
	{
		for(y=1; y<m+2; ++y)
		{
			cout<<A[x][y]<<"  ";
		}
		cout<<"\n";
	}
	//Print sum of each column 
	x=n+1;
	for(y=1; y<m+1; ++y)
	{
		cout<<A[x][y]<<"  ";
	}
	cout<<"\n";
	
	if(m==n)
	{
		for(x=1; x<m+1; x++)
		{
			for(y=1; y<n+1; y++)
			{
				if(x==y)
				sum+=A[x][y];
				else 
				if(y==m-(x+1))
				sum+=A[x][y];
			}
		}
	}
	
	cout<<" Sum of Diagonal elements is : "<<sum<<endl;
	getch();
	
}
