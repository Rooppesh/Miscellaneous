#include<stdio.h>
#include<fcntl.h>
int main()
{
	int size;
	int fd=open("file.txt",O_RDONLY);
	printf("File Descriptor:%d",fd);
	char *str;
	str = (char *) malloc(15);
	if(lseek (fd,5,SEEK_SET)>0)
	{
		size=read(fd,str,5);
		printf("\n Read:%s",str);
	}
	printf("\n");
	return 0;
}
