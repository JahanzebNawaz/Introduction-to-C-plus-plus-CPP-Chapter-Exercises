/* write a program that explains the concept of overflow and underflow
*/

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	short testvar=32767;
	cout<<testvar<<endl;
	testvar=testvar+2;
	cout<<testvar<<endl;
	testvar=testvar-1;
	cout<<testvar<<endl;
	
	getch();
}
