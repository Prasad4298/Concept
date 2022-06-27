#include<stdio.h>

int main()
{
	int marks = 0;
	
	printf(" Enter your marks\n");
	scanf("%d",&marks);
	
	printf("Your entered marks %d\n",marks);
	
	if(marks >= 60)
	{
		printf("you are in first class\n");
	}
	else
	{
		printf("you are in not first class\n");
	}
	
	return 0;
}