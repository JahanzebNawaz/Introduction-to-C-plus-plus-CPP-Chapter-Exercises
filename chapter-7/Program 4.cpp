/* displays total number of years till current date */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	
	int day,month,total;
	int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<" Enter the month number : ";
	cin>>month;
	cout<<"\n Enter the day number : ";
	cin>>day;
	
	total=day;
	for(int x=0; x<month;x++)
	{
		total+=days_per_month[x];
	}
	cout<<"the number of days in this year till date ="<<total<<endl;
	getch();
}
