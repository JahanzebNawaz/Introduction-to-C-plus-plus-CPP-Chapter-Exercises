/* write a program that inputs number of week's day and 
display the name  of the day */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int n;
	cout<<"\n Enter a number of a Weekday ";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<" Friday ";
			break;
			case2:
				cout<<" Saturday ";
				break;
					case 3:
						cout<<" Sunday ";
						break;
						case 4:
							cout<<" Monday ";
							break;
								case 5:
									cout<<" Tuesday ";
									break;
									case 6:
										cout<<" Wednesday ";
										break;
										case 7:
											cout<<" Thursday ";
											break;
											default:
												cout<<" \n Invalid Number ";
	}
	getch();
}
