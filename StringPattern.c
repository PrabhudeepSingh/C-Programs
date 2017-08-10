//Program to print the pattern
#include<stdio.h>
int main()
{
	int i,j;
	char str[]="C-PROGRAMMING";
	
	for(i=0;i<13;i++)
	{
		j=i+1;
		printf("%-14.*s",j,str);
		printf("\n");
	}
	
	printf("--------------\n");
	
	for(i=12;i>=0;i--)
	{
		j=i+1;
		printf("%-14.*s",j,str);
		printf("\n");
	}
	
return 0;
}
