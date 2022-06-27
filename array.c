#include<stdio.h>



void gun()
{
	register float fvalue = 20.3;
	printf("Value of f is %f",fvalue);
}

int main()
{ 
	auto int no = 10;
	printf("Inside main");
	gun();
	return 0;
}
