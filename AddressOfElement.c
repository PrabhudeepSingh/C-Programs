//Program to find the address of elements in 2-D array.
#include<stdio.h>
int main()
{
	int r,c,p,q,i,j,loc=0,m=0;
	float a[10][10];
	
	printf("Enter the order of Matrix : \nRows : ");
	scanf("%d",&r);
	while(r<=0||r>10)
	{
		printf("\nError... Range of Rows is 0 - 10 ");
		printf("\nEnter the number of Rows again : ");
        scanf("%d",&r);	
	}

	printf("Columns : ");
	scanf("%d",&c);	
	while(c<=0||c>10)
	{
		printf("\nError... Range of Columns is 0 - 10 ");
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
	
	printf("\nEntered matrix is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter coordinates of the elements : \nRow coordinate : ");
	scanf("%d",&p);
	printf("Column coordinate : ");
	scanf("%d",&q);
	
	printf("\n\tPRESS 1 TO FIND LOCATION BY COLUMN MAJOR.\n\tPRESS 2 TO FIND LOCATION BY ROW MAJOR.\n\n");
	scanf("%d",&m);
	
	if(m==1)
		loc=200+4*(r*(q-1)+(p-1));
	
	else
	    if(m==2)
		    loc=200+4*((q-1)+c*(p-1));
		    
	printf("\nLocation of a[%d][%d] : %d",p,q,loc);
	
return 0;
}
