#include<stdio.h>

int main()
{
	char str[10] = {'\0'};
	char *ptr = str;
	
	printf(" Write your name \n");
	scanf("%s",&str);
	
	printf("%d\n",sizeof(str));
	
	do
	{
		printf("%s\n",str);
		ptr ++;
	}while (*ptr != '\0');
	
	return 0;
}
	
	
	
	
