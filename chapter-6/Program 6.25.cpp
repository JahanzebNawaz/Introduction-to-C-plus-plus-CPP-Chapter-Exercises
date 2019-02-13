/* write a program that enters number of table and length of 
table and displays the table using for loop */

#include<iostream>
using namespace std;

main()
{
	int tab,len,n;
	n=1;
	cout<<"Enter a table number :";
	cin>>tab;
	cout<<"\n Enter lenght number :";
	cin>>len;
	
	for(n=1;n<=len;n++)
	{
		cout<<tab<<"  x "<<n<<" = "<<tab*n<<endl;
	}
}
