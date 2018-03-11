#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
	int ret;
	int fd[2];
	char buff[100]="";
	char a[100]="";
	printf(" Enter a Text");
	scanf("%s",a);
	ret=pipe(fd);
	if(fork()==0)
	{
		close(fd[0]);
		ret=write(fd[1],a,strlen(a)+1);
		if(ret != strlen(a));
		{
			printf(" Write didnt return Expected Val\n");
			exit(2);
		}
	}
	else
	{
		close(fd[1]);
		ret=read(fd[0],buff,strlen(a));
		if(ret != strlen(a))
		{
			printf(" Read didnt return Expected Val\n");
			exit(3);
		}
	}
		printf(" Parent read %s from the child Program\n",a);
		exit(0);
	
}	
