#include<stdio.h>

void demo()
{
	printf("Inside the demo\n");

	auto int i = 10;
	static int j = 12;
	
	i++;
	j++;
	
	i = i + 1;
	j = j +1;
	printf(" vlue of i %d\n",i);
	printf(" value of j %d\n",j);
}

int main()
{
	printf("inside the main\n");
	
	demo();
	demo();
	demo();
	demo();
	
	return 0;
}