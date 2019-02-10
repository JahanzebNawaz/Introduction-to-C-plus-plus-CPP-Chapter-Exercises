/* write a program that inputs salary and grade. it adds 50%
bonus if the grade is greater than 15. it adds 25% bonus if the 
grade is 15 or less and then display the total salary */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	float salary,bonus;
	int grade;
	cout<<"\n Enter your salary ";
	cin>>salary;
	cout<<"\n Enter your grade ";
	cin>>grade;
	if(grade>15)
	bonus=salary*50.0/100.0;
	else
	bonus=salary*25.0/100.0;
	salary=salary+bonus;
	cout<<"\n Your salary is "<<salary;
	getch();
	
}
