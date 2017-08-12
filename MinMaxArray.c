//program to find the minimum and maximum number in an array
#include<stdio.h>
int main()
{
	int i,n;
	float a[20],max,min;
	
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
	}
	
	max=a[0];
	min=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		    max=a[i];
		if(a[i]<min)
		    min=a[i];
	}

    printf("\nMaximum number is : %.2f",max);
    printf("\nMinimum number is : %.2f",min);
    
return 0;
}
