/*write a program that inputs salary. if salary is 20000 or more
it deducts 7% of salary. if salary is 10000 or more but less than 
20000, it deducts 1000 from salary. if salary is less than 10000
it deducts nothing, it finally displays the  net salary; */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int salary;
	float net;
	cout<<"\n Enter Salary ";
	cin>>salary;
	if(salary>=20000)
	net=salary-(salary*7.0/100.0);
	else if(salary>=10000)
	net=salary-1000;
	else
	net=salary;
	cout<<"\n Your net salary "<<net;
	getch();
	
	
}
