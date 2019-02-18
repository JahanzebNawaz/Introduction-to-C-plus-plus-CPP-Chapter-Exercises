/* write a program that initialize an array of ten integers.
using binary search */

#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int n,i,mid,start,end,loc;
	loc=-1;
	start=0;
	end=9;
	cout<<" Enter any Number to find : ";
	cin>>n;
	
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==n)
		{
			loc=mid;
			break;
		}
		else if(n<arr[mid])
		end=mid-1;
		else
		start=mid+1;
	}
	if(loc==-1)
	cout<<" Not Found!"<<endl;
	else
	cout<<n<<" Found at index "<<loc<<endl;
	getch();
}
