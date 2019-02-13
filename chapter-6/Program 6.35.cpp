/* write program that inputs number from user  using for loop 
if the number is greator than 0, it is displayed and next number 
is input . the program exits the loop if the  number is 0 or negative
using break statement */

#include<iostream>
using namespace std;

main()
{
	int x, num;
	for(x=1; x<=5; x++)
	{
		cout<<" \n\n Enter a number ";
		cin>>num;
		if(num<=0)
		break;
		cout<<" \n You entered "<<num<<endl;
	}
 } 

