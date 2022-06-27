#include<stdio.h>

int addition(int No1,int No2)
{
	int ans = 0;
	ans = No1 + No2;
	
	return ans;
}

int main()
{
	int a = 10;
	int b = 20;
	
	int (*fptr)(int,int);
	fptr = addition;
	
	printf("Address of addition funtion is %d\n",addition);
	ret = fptr(a,b);
	
	printf("Addition is %d\n",ret);
	return 0;
}