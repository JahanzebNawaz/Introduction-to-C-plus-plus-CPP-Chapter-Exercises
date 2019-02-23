/* Program that declares the structure to store roll no and marks 
of five subjects . it defines a structure variable, input the values 
and displays roll no , marks average marks */

#include<iostream>
#include<conio.h>
using namespace std;

struct test
{
	int rno;
	int m[5];
};

main()
{
	test r;
	cout<<" Enter roll no :";
	cin>>r.rno;
	int i,t;
	float avg;
	for(i=0; i<5; i++)
	{
		cout<<" Enter marks : ";
		cin>>r.m[i];
		t=t+r.m[i];
	 } 
	 
	 avg=t/5.0;
	 cout<<"Roll No: "<<r.rno<<endl;
	 cout<<"Total Marks : "<<t<<endl;
	 cout<<" Average : "<<avg<<endl;
	 
	 getch();
}
