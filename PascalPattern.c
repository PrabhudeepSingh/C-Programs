/*Program to print the following pattern
  1
  11
  121
  1331
  14641*/
  
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j=11,x=0;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\nError... Number of rows should be greater than 0");
		printf("\nEnter the number of rows again : ");
        scanf("%d",&n);	
	}
	printf("\n");
	
	printf("1");
	
	for(i=1;i<n;i++)
	{
		printf("\n");
		x=pow(j,i);
		printf("%d",x);
	}
	
return 0;
}
