#include<iostream>
using namespace std;

class demo
{
	public:
	int i,j;
	static int x;
	
	demo()
	{
		cout<<"Inside default constructor \n";
		i = 10;
		j = 20;
	}
};

int demo :: x = 30;

int main()
{
	cout<<"Inside main function \n";
	cout<< demo::x <<"\n";
	
	return 0;
}