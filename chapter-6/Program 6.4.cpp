/* program that displays first five numbers
with their  squares using while loop */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n;
	n=1;
	while(n<=5)
	{
		cout<<n<<"  "<<n*n<<endl;
		n++;
	}
	getch();
}
