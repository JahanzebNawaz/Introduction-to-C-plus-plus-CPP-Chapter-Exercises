/* write a program that inputs a floating point number 
an operator and an other floating point number 
. it displays the result by performing the operation >>> */

#include<iostream>
#include<conio.h>
using namespace std; 
main()
{
	float a,b;
	char op;
	cout<<" Enter floating point number ";
	cin>>a;
	cout<<" \n Enter Operation Operator ";
	cin>>op;
	cout<<"\n Enter floating point Number ";
	cin>>b;
	switch (op)
	{
		case '+':
			cout<<a+b<<endl;
			break;
			case '-':
				cout<<a-b<<endl;
				break;
				case '*':
					cout<<a*b<<endl;
					break;
					case '/':
						if(b==0)
						cout<<"\n Division by Zero! "<<endl;
						else 
						cout<<a/b<<endl;
						break;
						default:
							cout<<"Invalid Operator "<<endl;
						
	}
	getch();
	

}
