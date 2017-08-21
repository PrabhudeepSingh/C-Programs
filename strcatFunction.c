//program to illustrate the use of strcat()function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int i=0;
	
	printf("Enter the first String : ");
	gets(a);
	printf("Enter the Second String : ");
	gets(b);
	
	strcat(a,b);
	
	printf("Combined String is %s",a);

return 0;	
}
