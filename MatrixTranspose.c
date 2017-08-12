//Program to print transpose of a matrix.
#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j;
	
	printf("Enter rows of matrix : ");
	scanf("%d",&m);
	printf("Enter columns in matrix :");
	scanf("%d",&n);
	printf("\nEnter elements of matrix : \n\n");
	
	for(i=0;i<m;i++)
	    for(j=0;j<n;j++)
	    {
	    	printf("Enter the element at %d,%d position : ",i+1,j+1);
		    scanf("%d",&a[i][j]);
	    }
	printf("\nTranspose of the matrix is : \n");
	
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	        printf("%d\t",a[j][i]);
        printf("\n\n");
   }
   
return 0;
}
