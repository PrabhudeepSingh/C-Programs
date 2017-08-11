//Program to find average of n number without using array
#include<stdio.h>
int main()
{
	int i,n;
	float sum=0.0,avg,x;
	
	printf("Enter number of elements you want to enter : ");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\nError... Number of elements should be greater than 0");
		printf("\nEnter the number of elements again : ");
        scanf("%d",&n);	
	}
	printf("\n");
	
    for(i=1;i<=n;i++)
    {
    	printf("Enter the %d element : ",i);
    	scanf("%f",&x);
    	sum+=x;
	}
	
	avg=sum/n;
	
	printf("\nAverage = %.2f",avg);

return 0;
}
