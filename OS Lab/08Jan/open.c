#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<errno.h>
int main()
{
        int size1;
        int fd=open("file.txt",O_RDONLY);
        char *ch;
       	ch = (char *)malloc(15);
	size1 = read(fd,ch,10);
        printf("\n No. Of bytes Written:%d",size1);
        printf("\n Read %s",ch);
        return 0;
}

