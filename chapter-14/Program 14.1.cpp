/* Overloading ++ operator */

#include<iostream>
using namespace std;

class count
{
	private:
		int n;
		public:
			count()
			{
				n=0;
			}
			
			
			void show()
			{
				cout<<"Value of n : "<<n<<endl;
			}
			
			void operator ++()
			{
				n=n+1;
			}
};

main()
{
	count obj;
	obj.show();
	++obj;
	obj.show();
}

