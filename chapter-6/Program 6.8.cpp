/* Displays the degree to radian tabel using while loop */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
const double PI= 3.141593;
main()
{
	int degrees=0;
	double radian;
	cout.setf(ios::fixed);
	cout.precision(6);
	cout<<" Degrees to Radians \n ";
	while(degrees <= 360)
	{
		radian = degrees*PI/180;
		cout<<setw(6)<<degrees<<setw(10)<<radian<<endl;
		degrees+=10;
	}
	getch();
}
