#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>	

int main()
{
	char fname[30];
	int fd = 0, ret = 0;	
	char Data[11] = "Marvellous";	

	printf("Enter the file name that you want to Open\n");
	scanf("%s",fname);		// array is consider as base address of that array

	fd = open(fname, O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("file is succeesfully opened with fd : %d\n",fd);	// fd - 3
	}

	ret = write(fd,Data,10);

	return 0;
}
