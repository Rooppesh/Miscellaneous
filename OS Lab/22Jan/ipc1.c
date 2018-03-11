#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
	int ret,fl[2];
	char buff[100]="";
	char string1[100]="";
	printf("\n Enter A Msg>>:");
	scanf("%s",string1);
	ret=pipe(fl);
	if(ret!=0)
	{
		printf("\n cant Create Pipe");
	}
	if(fork()==0)
	{
		close(fl[0]);
		ret=write(fl[1],string1,strlen(string1));
		if(ret != strlen(string1))
		{
			printf("\n Write Didnt Return Expected Value");
		}
	}
	else
	{
		close(fl[1]);
		ret=read(fl[0],buff,strlen(string1));
		printf("\n Parent Read %s from Child program",buff);
	}
}
