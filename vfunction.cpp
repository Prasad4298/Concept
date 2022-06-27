// below application which demonstraight concept of overriding 

#include<iostream>
using namespace std;

class base 
{
	public:
	int x,y;
	
	virtual void fun()
	{
		cout<<" base fun \n ";
	}
	
	virtual void gun()
	{
		cout<<" base gun \n ";
	}
	
	void sun()
	{
		cout<<" base sun \n ";
	}
	
	virtual void run()
	{
		cout<<" base run \n ";
	}	
};

class derived : public base
{
	public:
	int i,j;
	
	void fun()			// virtual key word not neccessary, compiller allowed this stetement  
	{
		cout<<" derived fun \n ";
	}
	
	virtual void gun()
	{
		cout<<" derived gun \n ";
	}
	
	void sun()
	{
		cout<<" derived sun \n ";
	}
	
	void mun()			
	{
		cout<<" derived mun \n ";
	}
};

int main()
{
	base *bp = new derived();
	bp -> fun();
	bp -> gun();
	bp -> sun();		 // its allowed but this is not overriding concept 
	bp -> run();
	//bp -> mun();
	
	return 0;
}