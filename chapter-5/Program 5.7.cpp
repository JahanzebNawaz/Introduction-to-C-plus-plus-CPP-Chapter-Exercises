/* write a program that inputs five intergers. it finds
and prints the largest and smallest interger */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b,c,d,e,max,min;
	cout<<"\n Enter Five Intgers ";
	cin>>a>>b>>c>>d>>e;
	min=max=a;
	if(b<min) min=b;
	if(c<min) min=c;
	if(d<min) min=d;
	if(e<min) min=e;
	if(b>max) max=b;
	if(c>max) max=c;
	if(d>max) max=d;
	if(e>max) max=e;
	
	cout<<"\n Largest Number is "<<max<<endl;
	cout<<"\n Smallest Number is "<<min<<endl;
	
	getch();
}
