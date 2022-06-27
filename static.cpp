#include<iostream>

using namespace std;

class demo
{
	public:
	int x,y;
	
	private:
	static int i;
	
	public:	
	demo()
	{
		cout<<"inside constructor \n";
		x = 0;
		y = 0;	
		
	}
	
	static void fun(int no)
	{
		cout<<" Inside static fun \n";
		i = 51;
			
	}
	void gun(int no1,int no2,int no3)
	{
		cout<<"Inside non static gun method \n ";
		x = no1;
		y = no2;
		i = no3;
	}
	~demo()
	{
		cout<<"Inside destructor \n";
	}
};

int main()
{
	cout<<" Inside main function \n";
	
	demo obj;
	obj.fun(40);
	obj.gun(10,20,30);
	
	cout<<gun.x<<"\n";
	
	return 0;
}