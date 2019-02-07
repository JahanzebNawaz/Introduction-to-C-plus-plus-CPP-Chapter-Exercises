/* write a program that inputs three digit number fro user 
and display it in reverse order. for example 123 to 321 */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	int a,b,n;
	cout<<"\n Enter 3 digit number : ";
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<" \n Number in reverse form "<<n<<b<<a<<endl;
	getch();

}
