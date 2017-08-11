//Program to search the largest element from a given n sized array
#include<stdio.h>
int main()
{
	int i,n,loc=1;
	float a[20],large;
	
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
	}
	
	large=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		   {
		       large = a[i];
		       loc=i+1;
	       }
	}
	
	printf("\nLargest number is %.2f\nAnd it is element number is : %d",large,loc);
	
return 0;
}
