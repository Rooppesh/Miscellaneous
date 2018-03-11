#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<errno.h>
int main()
{
	int size1;
	int fd=creat("file.txt",O_WRONLY);
	printf("\n File Descriptor %d",fd);
	printf("\n Enter Your Word");
	char ch[100];
	scanf("%s",ch);
	size1 = write(fd,ch,strlen(ch));
	printf("\n No. Of bytes Written:%d",size1);
	printf("\n");
	return 0;
}
