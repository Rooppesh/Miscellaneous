#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int a=10;
void *threadfn(void *vargp)
{
	sleep(1);
	printf("\n %d",++a);
}
int main()
{
	pthread_t t;
	pthread_create(&t,NULL,threadfn,NULL);
	pthread_join(t,NULL);
	printf("\n After Thread");
	pthread_t t2;
	pthread_create(&t2,NULL,threadfn,NULL);
	pthread_join(t2,NULL);
	exit(0);
}
