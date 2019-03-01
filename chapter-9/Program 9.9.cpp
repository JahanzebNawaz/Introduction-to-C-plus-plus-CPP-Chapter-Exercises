/* program that enters two intergers in main() function and passes the interger to
a function by reference . the function swaps the value , the main() function should display
the values before and after swapping */
#include<iostream>
#include<conio.h>
using namespace std;
 void swap(int &x, int &y);
 
main()
{
	int a, b;
	cout<<"enter an interger ";
	cin>>a;
	cout<<"enter an interger ";
	cin>>b;
	cout<<"Values before swapping : \n";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<" Swapping the values "<<endl;
	swap(a,b);
	cout<<" Values after swapping \n";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	getch();
}

void swap(int &x, int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
