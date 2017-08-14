//Program to print diagonal elements of a square matrix
#include<stdio.h>
int main()
{
	int r,c,i,j;
	float a[20][20];
	
	printf("Enter the order of matrix : ");
	scanf("%d",&r);
	while(r<=0||r>20)
	{
		printf("\nError... Range of Order is 0 - 20 ");
		printf("\nEnter the Order of matrix again : ");
        scanf("%d",&r);	
	}
	c=r;
	
	printf("\nEnter the elements of the matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element at location a[%d][%d] : ",i+1,j+1);
			scanf("%f",&a[i][j]);   
		}                 
	}
		
	printf("\nEntered matrix is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe Diagonal elements are : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			   printf("%.2f\t",a[i][j]);
		}
	}
	 
	
} 
