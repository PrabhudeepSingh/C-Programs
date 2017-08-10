/*Program to print the following pattern 
    1
   101
  10101
 1010101*/
 
#include<stdio.h>
int main()
{
	int i,j,k,n,m,a,b,c;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\nError... Number of rows should be greater than 0");
		printf("\nEnter the number of rows again : ");
        scanf("%d",&n);	
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		    printf(" ");
		   
		for(k=1;k<=2*i-1;k++)
		{
			if(k%2==0)
			   printf("0");
			else
			  printf("1");
		}
		printf("\n");
	}

return 0;
}
