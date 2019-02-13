/* program that reads current state of telephone line 
user should enter w for working state and d for dead state.
other input should be invalid. use do-while loop to force the user
to enter a valid value */

#include<iostream>
using namespace std;
main()
{
	char s;
	do 
	{
		cout<<"Enter state of Phone \'W\' for working \'D\' for Dead ";
		cin>>s;
		
		if(s=='w'|| s=='W')
		cout<<" Telephone is working "<<endl;
		
		
	}
	while(s!='W' && s!='D');
}
