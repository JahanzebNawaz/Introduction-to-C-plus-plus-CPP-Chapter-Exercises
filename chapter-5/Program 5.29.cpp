/* write a program that inputs a number and display 
whether it is divisible by3 or not bu using conditional
 operator */
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 main()
 {
 	int n;
 	cout<<"Enter a number ";
 	cin>>n;
 	(n%3==0 ? cout<<"Divisible by 3" : cout<<"Not Divisible by 3 ");
 	getch();
 }
