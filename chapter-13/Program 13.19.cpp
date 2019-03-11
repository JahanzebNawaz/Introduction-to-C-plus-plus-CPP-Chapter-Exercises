/* static function */

#include<iostream>
using namespace std;

class test
{
	private:
	static int n;
	public:
		static void show()
		{
			cout<<"N = "<<n<<endl;
		}
};

int test::n=10;

main()
{
	test::show();
}
