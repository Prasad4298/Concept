#include<stdio.h>

struct demo
{
	float fvalue;
	int ivalue;
	char cvalue;
	int arr[];
};
int main()
{
	struct demo obj;
	float fvalue = 3.14;
	int ivalue = 11;
	char cvalue = 'A';
	int arr[4] = {10,20,30,40};
	
	int *p = &ivalue;
	int *q = &fvalue;
	int *r = &cvalue;
	
	printf(" The value of the c is %d\n",cvalue);
	printf(" The size of the arr is %d\n", sizeof(arr));
	printf(" The value of the r is %u\n",r);
	printf(" The value of the *q is %d\n",*q);
	
	return 0;
}