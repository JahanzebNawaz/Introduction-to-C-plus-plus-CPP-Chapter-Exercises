/* write a program that inputs marks and dsplays " Congratulations"
You have passed" if the marks are 40 or above */


#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	
	int marks;
	cout<<"\n\t Enter Marks : ";
	cin>>marks;
	 if(marks >= 40)
	 cout<<"\n\t Congratulations! You have Passed ";
	 getch();
}
