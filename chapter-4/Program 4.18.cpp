/* write a program that get temperature from 
user in celsius and convert it into Fahrenheit 
using formula 
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	float cel,faren;
	cout<<"enter temp in celsius : ";
	cin>>cel;
	faren=9.0/5.0*cel+32;
	cout<<"\n temp in fahrenheit is "<<faren;
	getch();
}
