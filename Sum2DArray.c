//Program to find the sum of all the elements of 2D-array
#include<stdio.h>
#include<unistd.h>
int main()
{
	int r,c,i,j;
	float a[20][20],sum=0.0;
	
	printf("Enter the order of Matrix : \nRows : ");
	scanf("%d",&r);
	printf("Columns : ");
	scanf("%d",&c);
	
	while(r<=0||r>20)
	{
		printf("\nError... Range of Rows is 0 - 20 ");
		printf("\nEnter the number of Rows again : ");
        scanf("%d",&r);	
	}
	
	while(c<=0||c>20)
	{
		printf("\nError... Range of Columns is 0 - 20 ");
		printf("\nEnter the number of Columns again : ");
        scanf("%d",&c);	
	}
	
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element at location a[%d][%d] : ",i,j);
			scanf("%f",&a[i][j]);
			sum+=a[i][j];
		}
	}
	printf("\nCalculating the result...");
	sleep(1);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	printf("                         ");
    printf("\n\aSum of all the elements of the Matrix is : %.2f",sum);
    
return 0;
}
