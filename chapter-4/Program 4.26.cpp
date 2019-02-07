/* write a program that will prompt the user to enter number
of hours. it computes and displays the number of weeks, days 
and hours within the inpput numberof hours 
eg 4000 hrs = 23. weeks, 5 days, 16 hours */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int hrs, w,d;
	cout<<"\n\t Enter number of hours ";
	cin>>hrs;
	w=hrs/168;
	hrs=hrs%168;
	d=hrs/24;
	hrs=hrs%24;
	cout<<"\n Weeks "<<w<<endl;
	cout<<"\n Days "<<d<<endl;
	cout<<"\n Hours "<<hrs<<endl;
	getch();
}
