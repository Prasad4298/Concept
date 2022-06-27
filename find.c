#include<stdio.h>
// finding two numbers
int first()
{
	int a = 0;
	
	printf(" Enter fist number \n");
	scanf("%d",&a);
	return a;
}
int second()
{
	int b = 0;
	
	printf(" Enter second number \n");
	scanf("%d",&b);
	return b;
}
int main()
{
	int no1 = 0;
	int no2 = 0;
	
	no1 = first();
	no2 = second();
	
	printf(" first number is :%d\n",no1);
	printf(" Second number is :%d\n",no2);
	
	return 0;
}