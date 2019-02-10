/* write a program that inputs three numbers and
 displays the maximum number */
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 main()
 {
 	int a,b,c,max;
 	cout<<"\n Enter 1st number ";
 	cin>>a;
 	cout<<"\n Enter 2nd number ";
 	cin>>b;
 	cout<<"\n Enter 3rd number ";
 	cin>>c;
 	max=a;
 	if(b>max)
 	max=b;
 	if(c>max);
 	c=max;
 	cout<<"\n The Maximum number is "<<max;
 	
 	getch();
 	
 }
