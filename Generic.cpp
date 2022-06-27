using namespace std;
#include<iostream>

template <class T>		// template header function
T Addition(T No1, T No2)
{
	T Ans = 0;	
	Ans = No1 + No2;
	return Ans;
}

int main()
{
	int x = 10, y = 11, iret = 0;

	iret = Addition(x,y);

	cout<<"Addition is :"<<iret<<"\n";	

	float a = 10.8, b = 11.5, fret = 0;

	fret = Addition(a,b);

	cout<<"Addition is :"<<fret<<"\n";

	double d1 = 17.8, d2 = 19.5, dret = 0.0;

	dret = Addition(d1,d2);

	cout<<"Addition is :"<<dret<<"\n";

	return 0;
}

// each function can not convert generic function;