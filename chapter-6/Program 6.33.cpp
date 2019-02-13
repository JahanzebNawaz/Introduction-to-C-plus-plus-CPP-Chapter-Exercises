/* write a program that inputs a number from the user using for loop 
it displays the number if it is greater than 0 otherwise it inputs next
number using continue statement */

#include<iostream>
using namespace std;

main()
{
	int x, num;
	for(x=1; x<=5; x++)
	{
		cout<<" Enter a number ";
		cin>>num;
		if(num<=0)
		cout<<"You entered"<<num<<endl;
	}
}
