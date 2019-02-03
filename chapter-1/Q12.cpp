/* write a program that inputs 3-digit number and display its digits
in separate three lines. 
for example if the user enters 123 the program displays the output 
as 
1
2
3
*/

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n,a,b,c;
	system("CLS");
	cout<<" \n\t Enter 3-digit Number : ";
	cin>>n;
	
	a=n/100;
	n=n%100;
	b=n/10;
	c=n%10;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	
	char y;
	cout<<"\n\t Enter y or Y to repeat the program : ";
	cin>>y;
	while(y=='y' || y=='Y')
	{
		main();
	}
	getch();
}
