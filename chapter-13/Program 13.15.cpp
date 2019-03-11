/* program counts the number */

#include<iostream>
using namespace std;

class yahoo
{
	private: 
	static int n;
	public:
		yahoo()
		{
			n++;
		}
		
		void show()
		{
			cout<<"You have created "<<n<<" objects so far "<<endl;
		}
};

int yahoo::n=0;

main()
{
	yahoo x,y;
	x.show();
	yahoo z;
	x.show();
	
}
