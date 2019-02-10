/* write a program that displays "C++" five times using 
GOTO statement */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n=1;
	loop:
		cout<<n<<"\t C++ "<<endl;
		n++;
		if(n<=5)
		goto loop;
		cout<<"End of Program "<<endl;
		getch();
 } 
