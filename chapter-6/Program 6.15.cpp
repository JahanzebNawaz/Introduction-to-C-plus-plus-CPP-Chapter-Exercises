/* progrma that uses while loop to enter number 
form the user and displays it, the loop is terminated 
if the user inputs -1; */


#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n;
	n=1;
	while(n!=-1)
	{
		cout<<" ENter a number ";
		cin>>n;
		cout<<" You Entered "<<n<<endl;
	}
	cout<<"End of Program";
	getch();
}
