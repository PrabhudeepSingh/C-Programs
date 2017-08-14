//Program to multiply two matrix
#include<stdio.h>
#include<process.h>
#include<unistd.h>
int main()
{
	int r1,c1,r2,c2,i,j,k;
	float a[10][10],b[10][10],d[10][10];
	
	printf("Enter the number of rows of first matrix : ");
	scanf("%d",&r1);
	while(r1<=0||r1>10)
	{
		printf("Error... Range of Rows is 0 - 10 ");
		printf("\nEnter the number of Rows again for first matrix : ");
        scanf("%d",&r1);	
	}
	
	printf("\nEnter the number of columns of first matrix : ");
	scanf("%d",&c1);
	while(c1<=0||c1>10)
	{
		printf("Error... Range of Columns is 0 - 10 ");
		printf("\nEnter the number of Columns again for first matrix : ");
        scanf("%d",&c1);	
	}
	
	r2=c1;
	printf("\nNumber of rows in second matrix is taken as : %d\n",r2);
	
	printf("\nEnter the number of columns of second matrix : ");
	scanf("%d",&c2);
	while(c2<=0||c2>10)
	{
		printf("Error... Range of Columns is 0 - 10 ");
		printf("\nEnter the number of Columns again for Second matrix : ");
        scanf("%d",&c2);	
	}
	
	printf("\nEnter the first matrix :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter the element at location a[%d][%d] : ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	
	printf("\nEnter the Second matrix :\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter the element at location a[%d][%d] : ",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			d[i][j]=0.0;
			for(k=0;k<r2;k++)
			{
				d[i][j]=d[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	printf("\nThe multiplication of matrices results into : \n\n");
	sleep(1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%.2f\t",d[i][j]);
		}
		printf("\n");
	}

return 0;
}
