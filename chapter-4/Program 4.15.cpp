/* write a program that inputs the distance traveled 
the speed of vehical. it calculates the time required 
to reach the destination and displays it */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	double distance,time,speed;
	cout<<"\n enter distance treveled in miles : ";
	cin>>distance;
	cout<<"\n enter speed of vehical : ";
	cin>>speed;
	time=distance/speed;
	cout<<"\n Time required to reach destination : "<<time<<" hours"<<endl;
	getch();
}
