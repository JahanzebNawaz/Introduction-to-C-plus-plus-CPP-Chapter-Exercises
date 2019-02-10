/* write a program that allows the user to enter any character 
through the keyboard and determines wether it is a capital letter
,small case letter, a digit number or a special symbol */

#include"iostream"
#include"conio.h"
using namespace std;

main()
{
	char ch;
	cout<<"\n Enter any Character ";
	cin>>ch;
	if((ch>='A') && (ch<='Z'))
	cout<<"\n The Character "<<ch<<" is a capital leter ";
	else if ((ch>='a') && (ch<='z'))
	cout<<"\n The Character "<<ch<<"  is small case letter ";
	else if ((ch>='0') && (ch<='9'))
	cout<<" The character "<<ch<<" is a Digit ";
	else 
	cout<<"\n The character "<<ch<<" is a Symbol ";
	getch();
	
}
