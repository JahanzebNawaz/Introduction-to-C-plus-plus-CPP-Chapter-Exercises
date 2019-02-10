/* write a program that displays the following menu 
of a health club 

Health Club Membership Menu
1. Standard Adult Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the Program

it inputs choice and numbers of months and calculates membership charges as follow

1. Standard Adult Membership                          RS 50
2. Child Membership                                   RS 20
3. Senior Citizen Membership                          RS 30
 
*/



#include<iostream>
#include<iomanip>
using namespace std;

main()
{
	int choice, months;
	double charges;
	cout<<"  Health Club Membership Menu \n\n ";
	cout<<"1. Standard Adult Membership\n";
	cout<<"2. Child Membership\n";
	cout<<"3. Senior Citizen Membership\n";
	cout<<"4. Quit the Program\n\n";
	cout<<"Enter your Choice: ";
	cin>>choice;
	if(choice>=1 && choice<=3)
	{
		cout<<" For How many Months? ";
		cin>>months;
		switch(choice)
		{
		case 1:
			charges = months*50.0;
			break;
			case 2:
				charges = months*20.0;
				break;
				case 3:
					charges = months*30.0;
					break;
		}
		cout<<" The total charges are Rs "<<charges<<endl;
	}
	else if (choice!=4)
	{
		cout<<" The Valid Choice are 1 to 4\n";
		cout<<" Run The program again and select one of these \n";
	}
	
}
