/* write a progarm taht inputs two numbres and one arithmetic operator
in main function and passess them to a function. arithmetics function
on two numbers on the basis of the operator entered by user using switch statement */

#include<iostream>
#include<conio.h>
using namespace std;

void cal(int a, int b, int c);

main()
{
	int x,y;
	char c;
	cout<<" Enter first Number , Operator and Second Number ";
	cin>>x>>c>>y;
	cal(x,y,c);
	getch();
	
 } 
 void cal(int a, int b, int op)
 {
 	switch(op)
 	{
 		case '+':
 			cout<<a<<" + "<<b<<" = "<<a+b;
 			break;
 			case '-':
 				cout<<a<<" - "<<b<<" = "<<a-b;
 				break;
 				case '*':
 					cout<<a<<" * "<<b<<" = "<<a*b;
 					break;
 					case '/':
 						cout<<a<<" / "<<b<<" = "<<a/b;
 						break;
 						case '%':
 							cout<<a<<" % "<<b<<" = "<<a%b;
 							break;
 							default:
 								cout<<" Invalid Operator! ";
	 }
 }
