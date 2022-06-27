#include<iostream>

using namespace std;

int main()
{
	typedef int NUMBER;
	typedef char LETTER;
	
	NUMBER no = 11;
	LETTER ch = 'M';
	
	cout<<sizeof(no)<<"\n";
	cout<<sizeof(ch)<<"\n";
	
	cout<<ch;
	cout<<no;
	
	typedef const int *CPTR;
	//const int *p = NULL;
	CPTR P = &no;
	
	cout<<*p<<"\n";
	
	return 0;
}