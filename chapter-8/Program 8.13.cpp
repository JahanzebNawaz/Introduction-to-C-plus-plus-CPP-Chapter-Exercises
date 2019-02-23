/* write a progarm that uses a union Shirt to store size, chest and height
and displays the result */

#include<iostream>
#include<conio.h>
using namespace std;

union shirt
{
	char size;
	int chest;
	int height;
};

main()
{
	shirt mine;
	cout<<"size of union : "<<sizeof(mine);
	cout<<"\n what size is (s/m/l)? ";
	cin>>mine.size;
	cout<<"\n the size is : "<<mine.size;
	cout<<" n\the chest measurement is : "<<mine.chest;
	cout<<" \nthe height measurement is : "<<mine.height;
	cout<<" \n\n what is the chest measurement ? ";
	cin>>mine.chest;
	cout<<"\n the size is "<<mine.size;
	cout<<" \nthe chest measurement is : "<<mine.chest;
	cout<<" \nthe height measurement is : "<<mine.height;
	cout<<"\n\n what is the height measurement ";
	cin>>mine.height;
	cout<<"\n the size is "<<mine.size;
	cout<<" \nthe chest measurement is : "<<mine.chest;
	cout<<" the height measurement is : "<<mine.height;
	getch();
}
