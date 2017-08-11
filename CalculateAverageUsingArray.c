//program to find average of n numbers using array
#include<stdio.h>
int main()
{
	int i,n;
	float a[20],sum=0.0,avg;
	
	printf("Enter total number of elements you want to enter : ");
	scanf("%d",&n);
	while(n<=0||n>20)
	{
		printf("\nError... Range of elements is 0 - 20 ");
		printf("\nEnter the number of elements again : ");
        scanf("%d",&n);	
	}
	printf("\n");	
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	
	avg=sum/n;
	printf("\nAverage = %.2f",avg);
	
return 0;
}
