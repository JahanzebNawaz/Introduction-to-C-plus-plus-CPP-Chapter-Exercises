/* write a program that inputs three numbers and displays the maximum
number by using logical operators */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b,c;
	cout<<"\n enter three numbers  ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	cout<<" \n Maximum number is "<<a;
	else if(b>a && b>c)
	cout<<"\n Maximum number is"<<b;
	else 
	cout<<"\n Mamixmum Number is "<<c;
	getch();
}
