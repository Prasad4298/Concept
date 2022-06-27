using namespace std;
#include<iostream>

int Addition(int No1, int No2)
{
	int Ans = 0;	
	Ans = No1 + No2;
	return Ans;
}

float Addition(float No1, float No2)
{
	float Ans = 0;	
	Ans = No1 + No2;
	return Ans;
}

double Addition(double No1, double No2)
{
	double Ans = 0;
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