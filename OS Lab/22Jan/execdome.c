#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()

{
	char *args[]={"./exec.c",NULL};
	execvp(args[0],args);
	printf("\n Ending...");
	return 0;
}
