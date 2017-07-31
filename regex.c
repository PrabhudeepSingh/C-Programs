//Program to illustrate the use of %[] in inputting string
#include<stdio.h>
int main()
{
	char str[100];
	
	printf("Enter a string :\n\n");
	scanf("%[a-z, ]",str);
	printf("\n%s",str);

return 0;
}
