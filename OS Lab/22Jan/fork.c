#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkeg()
{
	if(fork()==0)
	{
		printf(" Child,Hello!\n ");
	}
	else
	{
		printf("\n Parent,Hello!\n");
	}
}
int main()
{
	forkeg();
	return 0;
}
