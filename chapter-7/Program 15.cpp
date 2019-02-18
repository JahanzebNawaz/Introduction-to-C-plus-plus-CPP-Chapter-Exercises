/* write a program that initializes a two Dimensional array
of 2 rows and 3 coloumns and then displays its vaalues */

#include<iostream>
#include<conio.h>
using namespace std; 

main()
{
	int i,j, arr[2][3]={15,21,9,84,33,72};
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	getch();
}
