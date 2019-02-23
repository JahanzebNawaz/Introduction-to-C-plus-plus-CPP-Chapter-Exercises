/* program that declares the structure of store BookID, price and 
pages of a book,. it defines two structures variables and inputs values
it displays the record of most of costly book */

#include<iostream>
#include<conio.h>
using namespace std;

struct book
{
	int id;
	int pages;
	float price;
};

main()
{
	book b1,b2;
	
	cout<<"Enter the book id, pages and price : ";
	cin>>b1.id>>b1.pages>>b1.price;
	cout<<"\nEnter the book id pages and price : ";
	cin>>b2.id>>b2.pages>>b2.price;
	
	cout<<"\n\t The most costly book is as follow : \n ";
	
	if(b1.price>b2.price)
	{
		cout<<"\n\t\t Book id "<<b1.id;
		cout<<"\n\t\t Book Pages "<<b1.pages;
		cout<<"\n\t\t Book Price "<<b1.price;
	}
	else
	{
		cout<<"\n\t\t Book Id "<<b2.id;
		cout<<"\n\t\t Book Pages "<<b2.pages;
		cout<<"\n\t\t Book Price "<<b2.price;
	}
	
	getch();
}
