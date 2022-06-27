// constant input argument and not constant input argument 

#include<iostream>
using namespace std;

class demo 
{
	public:
	int i;
	
	static gun(int a, const int b)
	{
		a++;
		b++;
	}
};

int main()
{
	demo::gun(11,21);
	
	return 0;
}