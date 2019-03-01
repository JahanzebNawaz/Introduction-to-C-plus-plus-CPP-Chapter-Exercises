/* a program that inputs marks in main function and 
passes these marks to a function. func finds grade of student 
in the basis of the folloeing criteria */

#include<iostream>
#include<conio.h>
using namespace std;
 char grade(int m);
main()
 {
 	int marks;
 	char g;
 	cout<<"Ente marks : ";
 	cin>>marks;
 	g= grade(marks);
 	cout<<" Your Grade is "<<g;
 	getch();
 }
 char grade(int m)
 {
 	if(m>80)
 	return 'A';
 	else if(m>60)
 	return 'B';
 	else if(m>40)
 	return 'C';
 	else
 	return 'F';
 }
