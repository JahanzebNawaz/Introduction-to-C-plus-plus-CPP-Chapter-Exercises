/* Example of postfic and prefix that explains the differences 
of increment operators */
#include"iostream"
#include"conio.h"
using namespace std;
 main()
{
	int a,b,x,y;
	a=b=x=y=0;
	b=a++;
	y=++x;
	cout<<" A = "<<a<<endl<<" B = "<<b<<endl;
	cout<<" X = "<<x<<endl<<" Y = "<<y<<endl;
	getch();
	
	
}
