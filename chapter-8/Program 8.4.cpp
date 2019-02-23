/* structure to store employee id and salary. */

#include<iostream>
#include"conio.h"
using namespace std;

struct emp
{
	int eid;
	int sal;
};
 main()
 {
 	emp e = { 20, 18500};
 	cout<<"Employee ID : "<<e.eid<<endl;
 	cout<<"Employee Salary : "<<e.sal<<endl;
 	getch();
 }
