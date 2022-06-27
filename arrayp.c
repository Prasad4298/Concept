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
	
	printf(" size of p is %d\n",sizeof(p));
	printf(" the value of p %d\n",p);
	printf(" the address of arr is %d\n",&arr);
	printf(" the value of r %d\n",r);
	printf(" the value of *i%d\n",*i);
	
	
	return 0;
}