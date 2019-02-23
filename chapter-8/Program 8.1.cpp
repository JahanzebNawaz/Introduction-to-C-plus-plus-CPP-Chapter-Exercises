/* write a program that declares a structure to store Roll No, Marks, Average  and Grades 
of a student . the program should deffine a structure variable, inputs the values and then displays 
the values */

#include<iostream>
#include<conio.h>
using namespace std;
 struct Student
 {
 	int rno;
 	int marks;
 	float avg;
 	char grade;
 };
 
main()
 {
 	Student s;
 	cout<<"Enter Roll no : ";
 	cin>>s.rno;
 	cout<<" Enter Marks : ";
 	cin>>s.marks;
 	cout<<" Enter Average : ";
 	cin>>s.avg;
 	cout<<" Enter Grade : ";
 	cin>>s.grade;
 	
 	cout<<" You Entered the following Detials : \n";
 	cout<<" Roll No : "<<s.rno<<endl;
 	cout<<" Marks : "<<s.marks<<endl;
 	cout<<" Average : "<<s.avg<<endl;
 	cout<<" Grafe : "<<s.grade<<endl;
 	
 	getch();
 	
	  
 }
