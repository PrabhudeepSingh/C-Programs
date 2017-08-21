//program to illustrate the concept of strrev() function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	
	printf("Enter the String : ");
	gets(a);
	
	strrev(a);
	
	printf("Reversed String is : %s",a);
	
return 0;
}
