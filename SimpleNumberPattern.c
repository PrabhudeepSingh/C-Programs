/*Progarm to print the following pattern 
 0
 11
 222
 3333
 44444*/
 
#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("Enter number of rows : ");
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
		for(j=0;j<=i;j++)
		   printf("%d ",i);
		   
		printf("\n");
	}
}
