/* write a progarm that declares an enumeration to store months of a year */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	enum year{january=1, february, march, april, may, june, july, august, september, octuber, november, december};
	 year y;
	 y = march;
	 cout<<" the value of y is "<<y<<endl;
	 getch();
}
