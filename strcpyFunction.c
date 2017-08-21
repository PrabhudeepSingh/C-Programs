//program to illustrate the use of strcpy() function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	
	printf("Enter a String : ");
	gets(a);
	strcpy(b,a);
	printf("\nString after copying : ");
	puts(b);
	
return 0;
}
