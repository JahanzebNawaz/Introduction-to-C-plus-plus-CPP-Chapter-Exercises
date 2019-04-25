/* program of inheritance */

#include<iostream>
#include<conio.h>
using namespace std;
class move
{
	protected:
		int position;
		public:
			move()
			{
				position=0;
			}
			 void forward()
			 {
			 	position++;
			 }
			 void show()
			 {
			 	cout<<" Position = "<<position<<endl;
			 }
			 
};

class move2: public move
{
	public:
		void backword()
		{
			position--;
		}
		
};

main()
{
	move2 m;
	m.show();
	m.forward();
	m.show();
	m.backword();
	m.show();
	
	getch();
}
