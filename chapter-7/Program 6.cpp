/* 4 arrays numbers, squares, cubes and sums each consisting of 5 elements
*/

#include<iostream>
using namespace std;
main()
{
	const int size=5;
	int numbers[size];
	int squares[size];
	int cubes[size];
	int sums[size];
	 // store the numbers in the arrays
	 for(int i=0; i<size; i++)
	 {
	 	numbers[i]=i;
	 	squares[i]=i*i;
	 	cubes[i]=i*i*i;
	 	sums[i]=numbers[i]+squares[i]+cubes[i];
	 }
	 // output the sums aaray and add up all the sums
	 int total=0;
	 cout<<"Numbers \t";
	 for(int i=0; i<size; i++)
	 cout<<numbers[i]<<"\t";
	 cout<<endl;
	 cout<<"Squares \t";
	  for(int i=0; i<size; i++)
	 cout<<squares[i]<<"\t";
	 cout<<endl;
	 cout<<"cubes \t\t";
	  for(int i=0; i<size; i++)
	 cout<<cubes[i]<<"\t";
	 cout<<endl;
	 cout<<"Sums \t\t";
	  for(int i=0; i<size; i++)
	 {
	 	cout<<sums[i]<<"\t";
	 	total=total+sums[i];
	 }
	 cout<<endl;
	 cout<<"Grand Total "<<total<<endl;
	 
}
