//Program to demonstarte use of compound statement with if.
#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the first value : ");
	scanf("%d",&a);
	printf("Enter the second value : ");
	scanf("%d",&b);
	
	if(a<b)
	{
		c=b-a;
		printf("The difference is = %d",c);
	}
	if(a>=b)
	{
		c=a-b;
		printf("The difference is = %d",c);
	}

return 0;
}
