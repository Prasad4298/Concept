using namespace std;
#include<iostream>

template <class T>
class Arithematic
{
	public:
	T No1;
	T No2;

	Arithematic(T a, T b)
	{
		No1 = a;
		No2 = b;
	}

	T Addition()
	{
		T Ans;		// don't initialise of template variable with default values of ita datatype in oop concept. 
		Ans = No1 + No2;
		return Ans;
	}

	T Substraction()
	{
		T Ans;
		Ans = No1 - No2;
		return Ans;
	}
};

int main()
{
	Arithematic <int> iobj(10,11);	// metion in <> any premitive data type.	
	int iAdd = iobj.Addition();
	cout<<"Addition is :"<<iAdd<<"\n";


	Arithematic <double> dobj(10.9,11.5);	
	double dAdd = dobj.Addition();
	cout<<"Addition is :"<<dAdd<<"\n";	


	return 0;
}

// two seperate data type template argument mhanun object create is two;(<int> , <double>)
// teplate data type is <int> and <int> then object create only one.
