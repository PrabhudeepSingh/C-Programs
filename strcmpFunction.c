//Program to illustrate the use of strcmp() function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	
	printf("Enter the first String : ");
	gets(a);
	printf("Enter the Second String : ");
	gets(b);
	
	if(strcmp(a,b)==0)
		printf("\nStrings are equal.");
	else
		printf("\nStrings are not equal");
	
return 0;
}
