/* program that inputs two numbers in main() function, passess these number to a function 
display max numbers */

#include<iostream>
#include<conio.h>
using namespace std;
void max(int a, int b);

main()
{
	int x,y;
	cout<<"enter two numbers : ";
	cin>>x>>y;
	max(x,y);
	getch();
}

void max(int a, int b)
{
	if(a>b)
	cout<<"Maximum no is "<<a;
	else
	cout<<"Maximum No is "<<b;
	
}

