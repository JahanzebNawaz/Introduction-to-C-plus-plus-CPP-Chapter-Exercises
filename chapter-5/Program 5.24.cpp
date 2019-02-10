/* write a programm that inputs a character from the user and 
checks whether it is a vowel or consonant */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	char ch;
	cout<<"\n Enter a character ";
	cin>>ch;
	switch(ch)
	{
		case 'a':
			case 'A':
				cout<<"\n You Entered Vowel ";
				break;
				case 'e':
					case 'E':
						cout<<"\n You Entered Vowel ";
						break;
						case 'i':
							case 'I':
								cout<<"\n You Entered Vowel ";
								break;
								case 'o':
									case 'O':
										cout<<"\n You Enterd Vowel ";
										break;
										case 'u':
											case 'U':
												cout<<"\n You Entered Vowel ";
												break;
												default:
													cout<<" \n You Entered Consonant ";
	}
	getch();
}
