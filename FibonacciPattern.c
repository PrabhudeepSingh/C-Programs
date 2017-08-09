/*Program to print the following pattern
  1
  112
  1123
  11235
  112358*/
#include<stdio.h>
int main()
{
	int i,j,a,b,c,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\nError... Number of rows should be greater than 0");
		printf("\nEnter the number of rows again : ");
        scanf("%d",&n);	
	}
    printf("\n1\n");
    
    for(i=2;i<=n;i++)
    {
    	a=1;b=1;
    	printf("%d %d",a,b);
    	
    	for(j=3;j<=i+1;j++)
    	{
    		c=a+b;
    		printf(" %d",c);
    		a=b;
    		b=c;
		}
		printf("\n");
	}
	
return 0;
}
