#include<stdio.h>
#include<stdlib.h>
extern int saddition(int,int);

int main()
{
	int demo = 0;
	int *ptr = 0;
	
	printf("Enter the one digit number .......!\n");
	scanf("%ds",&demo);
	
	ptr = (int*)malloc(demo * sizeof(int));
	ptr = operation();
	
	free(ptr);
	
	return 0;
}

int operation()
{
	int a = 25;
	int b = 52;
	int c = 0;
	c = addition(a,b);
	printf(" The value of c is %d\n",c);
	return 0;
}
	