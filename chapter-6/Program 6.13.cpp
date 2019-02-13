/* inputs sentence  from user and counts  the number of words
and xharacters in sentence */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int countch=0;
	int countwd=1;
	cout<<" Enter a sentece "<<endl;
	char ch='a';
	while(ch!='\r')
	{
		ch=getche();
		if(ch==' ')
		countwd++;
		else
		countch++;
	}
	cout<<"\n words = "<<countwd<<endl;
	cout<<"\n characters = "<<countch-1<<endl;
	getch();
}
