/* write a program that inputs redius and calculates area 
and circumference of circle using the formula
Area= pie R2
circumference= 2pie r
 */
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 main()
 {
 	float area,radius,cir;
 	cout<<"\n enter radius :";
 	cin>>radius;
 	area=radius*radius*3.141;
 	cir=2*3.141*radius;
 	cout<<"\n Area "<<setprecisions(2)<<area<<endl;
 	cout<<"\n Circumference "<<setprecision(2)<<cir<<endl;
 	getch();
 }
