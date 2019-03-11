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
			
			static void show()
			{
				cout<<"you have created : "<<n<<" objs so far "<<endl;
				
			}
};

int yahoo::n=0;

main()
{
	yahoo::show();
	yahoo x, y;
	x.show();
	yahoo z;
	z.show();
}
