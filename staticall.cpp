#include<iostream>
using namespace std;

class Demo
{
		public:
		int i,j;         // instance variable (non static)
		static int x;   // class variable ( static )
		
		Demo(int a = 10,int b = 20)      // parametrised with default argument constructor 
		{
			cout<<" Inside constructor\n";
			
			this->i = a;
			this->j = b;
		}
		
		//void fun(demo *this,int no)
		void fun(int no)
		{
			cout<<" Inside non static fun \n";
			cout<<this->i<<"\n";
			cout<<this->j<<"\n";
		}
		
		// static void gun(int value)
		static void gun(int value)
		{
			cout<<"Inside static gun \n";
		}
};
int Demo::x = 30; 

int main()
{
	cout<<Demo::x<<"\n";
	Demo::gun(11);
	
	return 0;
}