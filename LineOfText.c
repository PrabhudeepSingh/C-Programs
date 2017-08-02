//Program to enter a line of text
#include<stdio.h>
int main()
{
	char line[100];
	
	printf("Enetr a line :\n\n");
	scanf("%[^\n]",line);
	
	printf("\n%s",line);

return 0;	
}
