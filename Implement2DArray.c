//Program to implement two dimensional array
#include<stdio.h>
int main()
{
	int r,c,i,j;
	float a[20][20];
	
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
		}
	}

	printf("\nEntered matrix is : \n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}

return 0;
}
