/* write a program that calculate the simple interest. it 
inputs pricipal amount, rate of interest and the number
of years and displays the simple interest */

#include<iostream>
#include<conio.h>
using namespace std;
 main()
 {
 	double p,r,t,i;
 	cout<<" Enter principal amount, rate, time : ";
 	cin>>p>>r>>t;
 	i=(p*r*t)/100;
 	cout<<"\n Principal amount RS = "<<p;
 	cout<<"\n Rate = "<<r<<"%";
 	cout<<"\n Time = "<<t<<"yrs";
 	cout<<"\n Simple interest  Amount = Rs "<<i;
 	getch();
 	
 }
