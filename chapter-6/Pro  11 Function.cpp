#include<iostream>
#include<conio.h>
using namespace std;
void show();

main()
{
	show();
	getch();
}


void show()
{
	int num,n,r,sum=0;
	cout<<"Enter a number ";
	cin>>num;
	n=num;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n/=10;
	}
	if(sum==0)
	cout<<"armstring number ";
	else
	cout<<" is not armstrong number";
}
