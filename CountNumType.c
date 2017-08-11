//Program to illustrate the concept of input and output of a one-dimensional array 
//by calculating how many positive values, negative values or zeros are in the array
#include<stdio.h>
int main()
{
	int a[20],i,n,pos=0,neg=0,zero=0;
	
	printf("Enter number of elements : ");
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
		scanf("%d",&a[i]);
		
		if(a[i]>0)
		    pos++;
		    
		else
		    if(a[i]<0)
		        neg++;

		    else
		        zero++;
	}
	
	printf("\nPositive numbers are : %d\nNegative numbers are : %d\nZero's are : %d",pos,neg,zero);
	
return 0;
}
