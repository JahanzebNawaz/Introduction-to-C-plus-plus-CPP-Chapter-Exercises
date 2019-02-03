/* write a program that inputs age in years and display age in days
and months */

#include<iostream>
#include<conio.h>
using namespace std;
 main()
 {
 	int age,months,days;
 	
 	cout<<"\n\t Enter age : ";
 	cin>>age;
 	
 	months=age*12;
 	days=age*365;
 	cout<<"\n\t Age in Months : "<<months<<endl;
 	cout<<"\n\t Age in Days : "<<days;
 	
 	getch();
 }
