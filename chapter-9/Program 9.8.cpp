/* Program that displays square of characters using function */

#include<iostream>
#include<conio.h>
using namespace std;

void shape(int , char);

main()
{
	int num;
	char ch;
	cout<<"\n Enter A number ";
	cin>>num;
	cout<<"Enter a character ";
	cin>>ch;
	shape(num,ch);
	getch();
}

void shape(int n, char c)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
		cout<<endl;
		for(j=1; j<=n; j++)
		cout<<c;
	}
}
