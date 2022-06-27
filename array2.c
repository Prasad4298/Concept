#include<stdio.h>

int fun()
{
	auto int i = 10;
	auto int j = 20;
	int ret = 0;
	return ret;
}

int main()
{
	printf("Inside main");
	fun();
	return 0;
	
}