//Program to find product of the respective elements in two dimensional arrays
#include<stdio.h>
int main()
{
	int i,n;
	float a[20],b[20],c[20];
	
	printf("Enter total number of elements of you want to enter : ");
	scanf("%d",&n);
	while(n<=0||n>20)
	{
		printf("\nError... Range of elements is 0 - 20 ");
		printf("\nEnter the number of elements again : ");
        scanf("%d",&n);	
	}
	
	printf("\nEnter element of First array : \n");	
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element : ",i+1);
		scanf("%f",&a[i]);
	}

    printf("\nEnter element of Second array : \n");	
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element : ",i+1);
		scanf("%f",&b[i]);
	}

    printf("\nrespective product of the two array's are : \n");
    for(i=0;i<n;i++)
    {
    	c[i]=a[i]*b[i];
    	printf("%d element is : %.2f\n",i+1,c[i]);
	}

return 0;
}
