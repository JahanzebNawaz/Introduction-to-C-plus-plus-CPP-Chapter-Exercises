/* Q.3 Write a program  to find out the area of triangle when three
sides a, b and c of the triangle are given. use appropriate statements
to input values a,b and c from the keyboard. Formula for the area of 
triangle is as follow 

area = underroot s(s-a) (s-b) (s-c)

where s=(a+b+c)/2.  */

#include<iostream>
#include<math.h>
#include<conio.h>
 using namespace std;
 
 main()
 {
 	float a, b, c;
 	double s, area;
 	system("CLS");
 	cout<<"Enter side A : ";
 	cin>>a;
 	cout<<"\n\n Enter side B : ";
 	cin>>b;
 	cout<<"\n\n Enter side C : ";
 	cin>>c;
 	
 	s=(a+b+c)/2.0;
 	area=sqrt(s*(s-a)*(s-b)*(s-c));
 	cout<<"\n\n Area of Triangle is : "<<area;
 	
	 char y;
	 cout<<"\n\nEnter y or Y to Repeat the program :";
	 cin>>y;
    while(y=='y' || y=='Y')
    { 
        main();
    }
	getch();
	
 }
