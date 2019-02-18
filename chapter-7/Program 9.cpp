/* program that inputs five numbers in an array and display them in 
actual and reverse order */

#include<iostream>
using namespace std;
main()
{
	int num[5],i;
	for(i=0; i<5;i++)
	{
		cout<<"Enter an interger ";
		cin>>num[i];
	}
	cout<<"\n The array in actual order :\n ";
	for(i=0;i<5;i++)
	 {
	 cout<<num[i]<<" ";}
	 
	 cout<<"\n The array in reverse order :\n ";
	 for(i=4;i>=0;i--)
	 {
	 	cout<<num[i]<<" ";
	 }
}
