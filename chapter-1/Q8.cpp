/* write a program  that inputs total pages of book, number of pages
a person reads in one day and number of days a person has read the 
book. it displays number of pages that have been read and number of 
pages remaining */
/* 
* total pages of book
* number of pages a person reads
* number of days  a person has read the book.
* display num of pages that have been read
and number of pages remaining */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int pages,pagedaily,days,remaining,completed;
	cout<<"\n\n\tEnter total pages of a Book : ";
	cin>>pages;
	cout<<"\n\tEnter pages person reads in one day : ";
	cin>>pagedaily;
	cout<<"\n\tEnter number of days a person read the Book : ";
	cin>>days;
	completed=days*pagedaily;
	remaining=pages-pagedaily;
	cout<<"\n\t Number of pages that have been read : "<<completed;
	cout<<"\n\t number of pages remaining : "<<remaining;
	
	getch();
	
	
	
}
