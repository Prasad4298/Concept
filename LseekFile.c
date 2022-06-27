#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>	

int main()
{
	char fname[30];
	int fd = 0, ret = 0;	
	char Data[11];	

	printf("Enter the file name that you want to Open\n");
	scanf("%s",fname);		

	fd = open(fname, O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("file is succeesfully opened with fd : %d\n",fd);	
	}

	lseek(fd,4,0);		
	// Parameters
	// 1: File Descriptor	kashat
	// 2: Displacement		Kitine halchal
	// 3: From where		Kuthun (0: Start of file, 1: Current position, 2: End of file)

	lseek(fd,-7,2);

	read(fd,Data,6);

	write(1,Data,6);

	close(fd);
	return 0;
}


