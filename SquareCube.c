//Program to print squares and cubes of numbers from 1 to 10
#include<stdio.h>
int main()
{
	int i;
	
	printf("NUMBER    SQUARE    CUBE\n");
	printf("======    ======    ====\n\n");
	
	for(i=1;i<=10;i++)
		printf("  %2d\t   %3d\t    %4d\n",i,i*i,i*i*i);
	
return 0;
}
