//Program to insert element in an array
#include<stdio.h>
int main()
{
	int y,i,j,n;
	float a[21],x;;
	
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
	
	printf("\nEnter the element to be inserted : ");
	scanf("%f",&x);
	printf("\nEnter its element number : ");
	scanf("%d",&y);
	y--;
	
	for(j=n-1;j>=y;j--)
	   a[j+1]=a[j];
    
    a[y]=x;
    
    printf("\nChanged array is : \n");
    for(i=0;i<n+1;i++)
		printf("Element %d : %.2f\n",i+1,a[i]);

return 0;
}
