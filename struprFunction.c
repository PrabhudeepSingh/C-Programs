//Program to illustrate the concept ot strupr() function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	printf("Enter a string in lowercase : ");
	gets(a);
	printf("\nString in upper case : %s",strupr(a));
	
return 0;	
}
