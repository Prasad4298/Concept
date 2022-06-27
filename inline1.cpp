#include<iostream>
using namespace std;

class demo
{
	public:
		inline int add(int no1, int no2)	// inline is a request for the compiller.   so execution time less 
		{
			int ans = 0;
			ans = no1 + no2;
			return ans;
		}
};

int main()
{
	demo obj;
	int ret = 0;
	
	ret = obj.add(10,11);
	
	cout<<ret<<"\n";
	
	return 0;
}