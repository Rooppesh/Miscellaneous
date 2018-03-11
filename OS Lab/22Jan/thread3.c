#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int y= 0;

void *func(void *vargp)
{
	int *m=(int *) vargp;
	printf("\n In thread %d",*m);
}

int main()
{
	int i;
	pthread_t t;
	for(i=0;i<8;i++)
	{
		pthread_create(&t,NULL,func,(void *) &i);
	}
	pthread_exit(NULL);
}
