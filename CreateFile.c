#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>	// file control

int main()
{
	char fname[30];
	int fd = 0;		// file desctripter

	printf("Enter the file name that you want to create\n");
	scanf("%s",fname);		// array is consider as base address of that array

	fd = creat(fname,0777);	// 1st parameter is name of file and 2nd is 

	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("file is succeesfully created with fd : %d\n",fd);	// return value of fd = 3
	}

	return 0;
}

/*
user type :

user 		//0
owner		//7		//4 + 2 +1
group		//7
other		//7

Operation on file :

Read		4
write		2
execute		1

*/
