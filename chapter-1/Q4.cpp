/* write a program that inputs miles from the user and convert miles
into kilometers. one mile is equal to 1.609 kilometer */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	float kilo;
	int miles;
	cout<<"\n\t Enter Miles : ";
	cin>>miles;
	kilo=1.609*miles;
	cout<<"\nMiles : "<<kilo<<" Kilometers";
	
	char rpt;
	cout<<" Repeat Y/y ? ";
	cin>>rpt;
	while(rpt == 'y' || rpt=='Y');
	{
		main();
	}
	getch();
}
