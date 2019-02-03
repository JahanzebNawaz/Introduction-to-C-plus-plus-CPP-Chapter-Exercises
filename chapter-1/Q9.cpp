/* A car can travel  5.3 miles in 1 liter. write a program that 
inputs petrol in liters and displays how much distance the car can 
cover using the availabe petrol */

/* input petrol in liters 
* display how much distance car travels
*/

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	float distance, liters;
	
	cout<<" \n\t Enter Petrol in liters : ";
	cin>>liters;
	distance=liters*5.3;
	cout<<" \n\t Car can cover "<<distance<<" miles in "<<liters<<" Liters ";
	getch();
	
}
