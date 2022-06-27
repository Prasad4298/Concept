#include<iostream>
using namespace std;

class demo 
{
	public:
	int i;
	static int j,k;
	
	demo()
	{
		cout<<" Inside default constructor \n ";
		i = 10;
		j = 20;
	}
	static void fun()
	{
		cout<<" Inside static fun \n ";
		j = 21;
	}	
};

int demo::j = 31, k = 51;

int main()
{
	cout<<demo::j<<"\n";
	cout<<demo::k<<"\n";
	
	demo::fun();
	cout<<demo::j<<"\n";
	
	return 0;
}