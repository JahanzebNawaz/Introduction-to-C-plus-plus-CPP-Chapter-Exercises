/* write a program that solves the following 
    a * b /( -c * 31 % 13 ) * d
    assuming the values of variables are as follows */
    
#include"iostream"
#include"conio.h"
using namespace std;

main()
{
	int a,b,c,d,r;
	a=10;
	b=20;
	c=15;
	d=8;
	r=a*b/(-c*31%13)*d;
	cout<<"\n Result of expression : "<<r<<endl;
	getch();

}
