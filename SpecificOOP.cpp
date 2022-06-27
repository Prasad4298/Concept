using namespace std;
#include<iostream>

class Arithematic
{
	public:
	int No1,No2;

	Arithematic(int a, int b)
	{
		No1 = a;
		No2 = b;
	}

	int Addition()
	{
		int Ans = 0;
		Ans = No1 + No2;
		return Ans;
	}

	int Substraction()
	{
		int Ans = 0;
		Ans = No1 - No2;
		return Ans;
	}
};

int main()
{
	Arithematic obj(10,11);
	
	int Add = obj.Addition();
	cout<<"Addition is :"<<Add<<"\n";	

	int Sub = obj.Substraction();
	cout<<"Substraction is :"<<Sub<<"\n";	

	return 0;
}