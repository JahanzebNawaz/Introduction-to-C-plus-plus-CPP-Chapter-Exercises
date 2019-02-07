/* write a program that inputs dividend and divisor. it then 
calculates and displays the quotient remindder */

#include<iostream>
#include<conio.h>
using namespace std;
 main()
 {
 int div,dis,q,r;
 cout<<" Enter dividend and divisor : ";
 cin>>div,dis;
 q=div/dis;
 r=div%dis;
 cout<<"Quotient = "<<q<<endl;
 cout<<"Remainder : "<<r;
 getch();
 }

