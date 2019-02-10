/* write a program that inputs marksof three subjects. if the average
of marks is more thatn 80 it displays two messages 
"You are above standard!" and "Admission Granted!" */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int sub1,sub2,sub3;
	float avg;
	cout<<"\n\t Enter marks of 1st subject ";
	cin>>sub1;
	cout<<"\n\t Enter marks of 2nd Subject ";
	cin>>sub2;
	cout<<"\n\t Enter marks of 3rd subject ";
	cin>>sub3;
	avg=(sub1+sub2+sub3)/3.0;
	if(avg>80)
	{
		cout<<"\n\t You are above Standard! ";
		cout<<"\n\t Admission Granted ";
	}
	getch();
}
