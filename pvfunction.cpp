// pure virtual function

#include<iostream>
using namespace std;

class base
{
	public:
	int x,y;
	
	int add(int a, int b)
	{
		return a + b;
	}
	
	virtual int sub(int a, int b) = 0;
};

class derived : public base
{
	public:
	int i,j;
	
	int sub(int a, int b)
	{
		return a - b;
	}
	
	int mult(int a, int b)
	{
		return a * b;
	}
};

int main()
{
	base *bp = new derived();
	int ret = 0;
	
	ret = bp -> add(11,10);			
	cout<<ret<<"\n";				// 21
	
	ret = bp -> sub(11,10);
	cout<<ret<<"\n";				// 1
	
	cout<<sizeof(derived)<<"\n";   // 20 because size of vptr is iserted into sizeof obj
	cout<<bp<<"\n";
	
	return 0; 
}
	