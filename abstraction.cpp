#include<iostream>
using namespace std;

class demo
{
	public:
	int x;
	
	private:
	int y;
	
	protected:
	int z;
	
	public:
	demo()
	{
		x = 11;
		y = 21;
		z = 51;
	}
	
	void fun()
	{
		cout<<y<<"\n";
	}
	
	private:
	void gun()
	{
		cout<<z<<"\n";
	}
	
	protected:
	void run()
	{
		cout<<x<<"\n";
	}
};

class hello : public demo
{	
	public:
	int i,j;
	
	void mun()
	{
		cout<<" inside hello class is derived from base class \n ";
	}
	
	void bun()
	{
		run();
		//gun();
	}
};

int main()
{
	demo dobj;
	hello hobj;
	
	dobj.fun();
	hobj.bun();
	
	return 0;
}