#include<stdio.h>

int main()
{
	int no = 10;
	int *p = NULL;
	p = &no;
	
	printf("%d\n",sizeof(p));
	
	return 0;
}