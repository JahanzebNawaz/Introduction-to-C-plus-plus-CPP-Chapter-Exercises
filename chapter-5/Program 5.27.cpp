/* write a program that converts ASCII number to character 
adn vice versa . the program should dislay the following 
convert ASCII value to character
convert character to ASCII value */

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
 main()
 {
 	int number,option;
 	char letter;
 	cout<<"1. Convert ASCII to Character "<<endl;
 	cout<<"2. Convert character to ASCII "<<endl;
 	cin>>option;
 	switch(option)
 	{
 		case 1:
 			cout<<"Enter a number ";
 			cin>>number;
 			cout<<"The corresponding character is "<<char(number)<<endl;
 			break;
 			case 2:
 				cout<<"Enter a character ";
 				cin>>letter;
 				cout<<" The ASCII value of the letter is "<<int(letter)<<endl;
 				break;
 					default:
 						cout<<"Invalid value";
 						break;
	 }
	 getch();
 }
