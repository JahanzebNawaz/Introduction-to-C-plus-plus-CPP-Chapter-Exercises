/* write a program that inputs the radius of a circle and
displays the circumference by using formula 2pieR. store the 
value of Pie in a constant by using DEFINE directive. */

#include<iostream>
#include<conio.h>
using namespace std;
#define PI 3.141
main()
{
	float r, area;
	cout<<" Enter radius : ";
	cin>>r;
	area=2.0*PI*r;
	cout<<"\n\t Area = "<<area;
	getch();
}
