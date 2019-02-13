/* program that inputs numbers until the user 
enters a negative number. the program calculates the average
maxmimum and minimum of all positive numbers. */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float num,sum;
	float avg,max,min;
	int count;
	sum=0.0;
	count=0;
	cout<<" Enter a postivve number ";
	cin>>num;
	min=num;
	max=num;
	while(num>=0.0)
	{
		sum+=num;
		count++;
		if(num<min)
		min=num;
		cout<<" Enter positive number ";
		cin>>num;
	}
	if(count==0)
	cout<<"No positive number entered "<<endl;
	else
	{
		avg=sum/count;
		cout<<" You entered "<<count<<" numbers"<<endl;
		cout<<" Average = "<<avg<<endl;
		cout<<" Minimum = "<<min<<endl;
		cout<<" Maximum = "<<max<<endl;
		
	}
	getch();
}
