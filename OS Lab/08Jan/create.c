#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
extern int errno;
int main()
{
	int fd=creat("file.txt",0777);
	printf("\n File Descriptor=%d",fd);
	if(fd == -1)
	{
		printf("\n Error Number %d",errno);
		perror("\n Program Ending");
	}
	return 0;
}
