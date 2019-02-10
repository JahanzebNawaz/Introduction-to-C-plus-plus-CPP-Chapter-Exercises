/* write a program that calculates the electricity bill
the rates of electricity per unit are as follow

units <=300 then cost is rs 2per unit
units >300 and <=500 then it cost rs 5 per unit
units >500 cost rs 7

a line rent Rs150 is also added to the bill and a subcharge of 5%
extra if the bill exceeda Rs 2000. calculates the total bill */
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 main()
 {
 	int units;
 	float bill;
 	cout<<"\n Enter units consumed ";
 	cin>>units;
 	if(units>500)
 	bill=units*7;
 	else if(units>300)
 	bill=units*5;
 	else 
 	bill=units*2;
 	bill=bill+150;
 	if(bill>2000)
 	bill=bill+(bill*5.0/100.0);
 	cout<<"\n Total Bill is "<<bill;
 	getch();
 }
