/* write a program that inputs temperature from the user in 
Fahrenheit and converts it into Celsius degree using formula 
c=5/9(F-32) */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	float cel,faren;
	system("CLS");
	cout<<"\n\t Enter Temperature in Farenheit : ";
	cin>>faren;
	cel=5/9*(faren-32);
	cout<<"\n\t Temperature in Celsius is "<<cel;
	
	char y;
	cout<<"\n\n\n\t Enter y Or Y to repeat the  program : ";
	cin>>y;
	while(y=='y' || y=='Y')
	{
		main();
	}
	getch();
}
