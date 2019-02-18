/* input age of different persons and sounts the number of persons in the
age group 50 and 60; */

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int age[150],i,n,count=0;
	cout<<"  Enter the number of personsrequired ";
	cin>>n;
	cout<<"\n Enter ages of "<<n<<" persons "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>age[i];
		if(age[i]>=50 && age[i]<=60)
		count=count+1;
	}
	cout<<count<<" persons are between 50 and 60";
	
}
