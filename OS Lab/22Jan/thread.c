#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *threadfn(void *vargp)
{
	sleep(1);
	printf("\n In Thread");
	return NULL;
}
int main()
{
	pthread_t tid;
	printf("\n Before Thread");
	pthread_create(&tid,NULL,threadfn,NULL);
	pthread_join(tid,NULL);
	printf("\n After Thread");
}
