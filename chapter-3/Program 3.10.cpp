/* write a program divides two float variables and finds the reminders by
using explicit casting  */
    
#include"iostream"
#include"conio.h"
using namespace std;

main()
{
	float a,b;
	int c;
	a=10.3;
	b=5.2;
	c=(int)a%(int)b;
	cout<<"\nResult is : "<<c;
	getch();

}
