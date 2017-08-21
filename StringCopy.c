//program to copy one string into another string without using strcpy() function
#include<stdio.h>
int main()
{
	char a[20],b[20];
	int i;
	printf("Enter String : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	b[i]=a[i];
	
	printf("Copied String is : ");
	puts(b);
	
return 0;
}
