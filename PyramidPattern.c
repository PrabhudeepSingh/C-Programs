//Program to form pyramid
#include<stdio.h>
int main()
{
	int n,i,j,k;
	
	printf("Enter number of lines : ");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\nError... Number of rows should be greater than 0");
		printf("\nEnter the number of rows again : ");
        scanf("%d",&n);	
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		    printf(" ");
		
		for(k=0;k<=i;k++)
		    printf("* ");
		
		printf("\n");
	}

return 0;
}
