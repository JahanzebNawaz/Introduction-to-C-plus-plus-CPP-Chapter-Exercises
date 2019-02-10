/* write a program that inputs test scores of a student and 
displays his grade according to criteria 
90  grade A
80  grade B
70  grade C
60  grade D
below 60  grade F  */

#include<iostream>
#include<conio.h>
using namespace std;
 main()
 {
 	int score;
 	cout<<"\n Enter Test score ";
 	cin>>score;
 	if(score>=90)
 	cout<<"\n Your Grade is A";
 	else if(score>=80)
 	cout<<"\n Your Grade is B";
 	else if(score>=70)
 	cout<<"\n Your Grade is C";
 	else if(score>=60)
 	cout<<"\n Your Grade is D";
 	else 
 	cout<<"\n Your Grade is F ";
 	 getch();
 	 
 	
 }


