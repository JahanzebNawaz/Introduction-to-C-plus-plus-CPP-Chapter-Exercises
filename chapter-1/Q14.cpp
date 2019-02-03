/*  write a program to calcullate the volume (V) of a cube by taking
measures from the user . 
Formula: V=length*width*height 
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	float len,wid,ht,v;
	cout<<"\n Enter length : ";
	cin>>len;
	cout<<"\n Enter width : ";
	cin>>wid;
	cout<<"\n Enter height : ";
	cin>>ht;
	v=len*wid*ht;
	cout<<"\n\tVolume of Cube : "<<setprecision(2)<<v;
	getch();
	
}
