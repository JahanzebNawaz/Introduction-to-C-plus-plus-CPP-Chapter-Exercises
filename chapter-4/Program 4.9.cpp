/* write a program that inputs name age and address from the user
and then displays these values on the screen */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	char name[25],city[30];
	int age;
	
	cout<<"\n Enter your age : ";
	cin>>age;
	cout<<"\n Enter your First Name : ";
	cin>>name;
	cout<<"\n Enter your city : ";
	cin>>city;
	cout<<"\n Your First Name : "<<name<<endl;
	cout<<"\n Your City Name : "<<city<<endl;
	cout<<"\n Your age : "<<age<<endl;
	getch();
	
}
