//Program to find sum of positive numbers and exit when negative number is entered
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
		
		if(a[i]<0)
		{
			printf("\nThe  program is terminated because you entered a negative number.\n");
			return 0;
		}
		else
			sum+=a[i];
	}
	
	printf("\nSum of the elements is : %.2f",sum);
	
return 0;

}
