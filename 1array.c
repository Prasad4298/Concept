#include<stdio.h>

int main()
{
	
	int arr [4];
	int *p = &arr;
	int *r = &p;
	int *i = &r;
	
	arr [0] = 11;
	arr [1] = 21;
	arr [2] = 51;
	arr [3] = 101;
	
	srintf(" the size of arr is %d\n",arr);
	printf(" the address of arr is %d\n",arr);
	printf(" the address of arr[0] is %d\n",arr[0]);
	printf(" the value of second element of arr is %d\n",arr[2]);
	printf(" the address of third elements of arr is %d\n",&arr[3]);
	printf(" the address of arr[1] is %d\n",&arr[1]);
	
	
	
	return 0;
}