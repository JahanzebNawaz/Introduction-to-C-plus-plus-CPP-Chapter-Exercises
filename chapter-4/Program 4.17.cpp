/* write a program that inputs time in seconds and 
converts it into hh-mm-ss forms */

#include<iostream>
#include<conio.h>
using namespace std; 

main()
{
	int sec,s,m,h;
	cout<<"\n Enter time in seconds : ";
	cin>>sec;
	h=sec/3600;
	sec=sec%3600;
	m=sec/60;
	s=sec%60;
	cout<<"\n HH-MM-SS = "<<h<<":"<<m<<":"<<s;
	getch();
}
