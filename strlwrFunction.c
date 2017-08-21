//Program  to illustrate the concept of strlwr() function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	printf("Enter a string in uppercase : ");
	gets(a);
	printf("\nString in lower case : %s",strlwr(a));
	
return 0;	
}
