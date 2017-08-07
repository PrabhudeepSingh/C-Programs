//Program to implement continue statement
#include<stdio.h>
int main()
{
	int a[10],n,i,sum=0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	while(n>10||n<0)
	{
		printf("\nError... Range of elements is 1 - 10\n");
		printf("Enter the number of elements again : ");
		scanf("%d",&n);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element : ",i+1);
		scanf("%d",&a[i]);
		
		if(a[i]<0)
		   continue;
		   
		sum+=a[i];
	}
	
	printf("\nSum is = %d",sum);

return 0;
}
