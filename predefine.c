#include<stdio.h>

int main()
{
	int i = 10;
	int j = 11;
	float f = 3.14;
	int arr[3] = {11,21,51};
	
	int *ptr = NULL;
	ptr = &i;
	*ptr = ++i;
	*ptr = NULL;
	ptr = &arr;
	
	printf("%d\n",&(arr));
	printf("%d\n",&(arr[0]));
	printf("%d\n",(1 + arr));
	printf("%d\n",&(ptr+1));
	
	printf("the value of pointer is %d\n",*ptr);

	
	return 0;
}
