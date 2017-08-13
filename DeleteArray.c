//Program to delete element in an array
#include<stdio.h>
int main()
{
	int x,i,j,n;
	float a[20];

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
	
	printf("\nEnter the element number to be deleted : ");
	scanf("%d",&x);
	x--;
	
	for(j=x;j<=n;j++)
	   a[j]=a[j+1];
	
	printf("\nArray after deletion : ");
	for(i=0;i<n-1;i++)
	     printf("\nElement %d : %.2f",i+1,a[i]);

return 0;
}
