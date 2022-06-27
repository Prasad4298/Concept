// below program demonstraight the all concept of ( virtual, pure virtual, concrete ) function.

#include<iostream>
using namespace std;

class base
{
	public:
	int x,y;
	
	void fun()					// concrete non virtual 
	{
		cout<<" base fun \n";
	}
	
	virtual void gun()			// concrete virtual 
	{
		cout<<" base gun \n";
	}
	
	virtual void sun()			// concrete virtual 
	{
		cout<<" base sun \n";
	}
	
	virtual void run()=0;		// abstract function  ( no body ) 
};

class derived : public base
{
	public:
	int i,j;
	
	void fun()					// redefination ( concrete function )
	{
		cout<<" derived fun \n";
	}
	
	virtual void gun()			// overriding 
	{
		cout<<" derived gun \n";
	}
	
	void run()					// concrete function  ( parent class madhe function chi defination pahije
	{
		cout<<" derived run \n";
	}
};
		
int main()
{
	derived dobj;
	base *bp = NULL;
	bp = &dobj;
	
	cout<<sizeof(base)<<"\n";
	cout<<sizeof(derived)<<"\n";
	
	bp -> fun();			// base fun
	bp -> gun();			// derived gun
	bp -> sun();			// base sun
	bp -> run();			// derived run
	
	return 0; 
}
	