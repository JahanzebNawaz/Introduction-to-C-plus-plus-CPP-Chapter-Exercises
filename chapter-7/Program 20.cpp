/* write a program that declares a three dimensional array to store the temperature of a month. the temperature is entered for morning , noon and evening of each 
day . */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int i,j,k, max, min, tot=0;
	float avg;
	int temp[3][7][4];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<7; j++)
		{
			for(k=0; k<4; k++)
			{
				cout<<" Enter Temperature ";
				cin>>temp[i][j][k];
			}
		}
	}
	max=min=temp[0][0][0];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<7; j++)
		{
			for(k=0; k<4; k++)
			{
				tot=tot+temp[i][j][k];
				if(temp[i][j][k]>max)
				{
					max=temp[i][j][k];
				}
				if(temp[i][j][k]<min)
				{
					min=temp[i][j][k];
				}
			}
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<7; j++)
		{
			for(k=0; k<4; k++)
			{
				cout<<" Enter Temperature "<<temp[i][j][k]<<"\t";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	avg = tot/84.0;
	cout<<"Maximum temperature of month : "<<max<<endl;
	cout<<"Minimum temperature of month : "<<min<<endl;
	cout<<"Average temperature of month : "<<avg<<endl;
	
	getch();
	
}

