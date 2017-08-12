//Program to fing sum of elements in an array
#include<stdio.h>
int main()
{
	int i,n;
	float a[20],sum=0;
	
	printf("Enter total number of elements of you want to enter : ");
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
		printf("Enter the %d element : ",i+1);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	
	printf("\nSum of the elements is : %.2f",sum);
	
return 0;
}
