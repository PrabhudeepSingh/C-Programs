//Program to print star pattern
#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("Enter number of lines : ");
	scanf("%d",&n);
    printf("\n");
    
 	if(n<=0)
	{
		printf("Invalid entry");
		return 0;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

return 0;
}
