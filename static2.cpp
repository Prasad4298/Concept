#include<iostream>
using namespace std;

class demo
{
	public:
	int i,j;
	static int x;
	
	demo(int a = 10, int b = 10)
	{
		cout<<"Inside default constructor \n";
		this -> i = a;
		this -> j = b;
	}
	
	void fun(int no)
	{
		cout << " Inside non static fun \n ";
		cout << this -> i << "\n";
		cout << this -> j << "\n";
		cout << demo :: x << "\n";
	}
	
	static void gun ( int value )
	{
		cout << " Inside static gun \n ";
		
		x = value;
		
		//cout << this -> x << "\n";	//static member functtion access static member of class by using the name of class
		cout << demo::x << "\n";   
	}
};

int demo :: x = 30;

int main()
{
	cout<<"Inside main function \n";
	
	cout<< demo::x <<"\n";
	demo :: gun ( 11 );  		// static member function call by using class name
	
	demo obj ( 11 );
	obj.fun ( 21 );			// non static member function call by creating object of class
	
	cout<< sizeof(obj) <<"\n";
	cout<< obj.i <<"\n";
	cout<< obj.j <<"\n";
	
	// static member function allwayes call by using name of class 
	obj.gun( 11 );	// he allowed ahe pn asa karu naye ( for good programming practice )
	
	
	return 0;
	
	
	
	
}