//Program to demonstrate the use of command-line arguments.
#include<stdio.h>
int main(int argc,char *argv[])
{
	int i;
	printf("Number Of Arguments = %d\n are \n",argc-1);
	
	for(i=1;i<argc;i++)
		printf("Argument Number %d = %s\n",i,argv[i]);

return 0;
}
