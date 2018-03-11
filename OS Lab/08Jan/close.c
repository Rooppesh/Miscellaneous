#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd=open("file.txt",O_RDONLY);
	printf("\n File Opened %d",fd);
	if(close(fd)<0)
	{
		printf("\nError");
	}
	else
	{
		printf("\n File is Being Properly Closed");
		printf("\n Thank You");
	}
	printf("\n");	
}
