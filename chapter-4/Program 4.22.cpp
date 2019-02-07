/* write a program that calculates the final velocity 
of an object by taking following inputs from user 
vi= initial velocity
a=accelaration
t=time span
formula vf=vi+at */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	int vi,vf,a,t;
	cout<<"\n enter the initial velocity :";
	cin>>vi;
	cout<<"\n enter the acceleration : ";
	cin>>a;
	cout<<"\n enter the time : ";
	cin>>t;
	vf=vi+a*t;
	cout<<"\n Final Velocity : "<<vf;
	getch();
}
