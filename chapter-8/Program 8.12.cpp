/* write a progarm that use 3 structures Dimension, Results and rectangle 
 and displays the result */
 
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

struct Dimension
{
	double length;
	double width;
};
struct Result
{
	double area;
	double perimeter;
};
struct Rectangle
{
	Dimension size;
	Result stat;
};

main()
{
	Rectangle box;
	cout<<" enter the length og the rectangle : ";
	cin>>box.size.length;
	cout<<" enter the width of the rectangle : ";
	cin>>box.size.width;
	box.stat.area = box.size.length*box.size.width;
	box.stat.perimeter= 2* box.size.length+2*box.size.width;
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);
	cout<<setprecision(2);
	cout<<" the erea of rectangle is "<<box.stat.area<<endl;
	cout<<" the perimeter of rectangle is "<<box.stat.perimeter<<endl;
	getch();
}

