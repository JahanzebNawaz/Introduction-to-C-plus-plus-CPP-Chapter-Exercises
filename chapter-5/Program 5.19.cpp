/* write a program that inputs a character and displays wether 
it is vowel or not */

#include"iostream"
#include"conio.h"
using namespace std;

main()
{
	char ch;
	cout<<"\n Enter a character ";
	cin>>ch;
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' ||ch=='O' || ch=='u' || ch=='u')
	cout<<"\n You Entered a Vowel "<<ch;
	else
	cout<<"\n You did not enter a vowel ";
	getch();
}
