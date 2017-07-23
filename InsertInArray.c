#include<stdio.h>
int main()
{
    int array [50],position,i,n,value;
    printf( "Enter number of elements in array : " ) ;
    scanf("%d",&n);
    
	while(n>50||n<0)
	{
		printf("\nERROR...  The range for elements is 1 to 50");
		printf("\nEnter the total number of elements again : ");
       	scanf("%d",&n);
	}
	
	printf("\n");
	
    for(i=0;i<n;i++)
    {
    	printf("Enter the %d element : ",i+1);
    	scanf("%d",&array[i]);
   	}

    printf("\nEnter the location where you wish to insert an element :" );
    scanf("%d",&position) ;

    printf("\nEnter the value to insert : " );
    scanf("%d",&value);

    for(i=n-1;i>=position-1;i--)
    array[i+1]=array[i];

    array[position-1]=value;
    
    printf("\nResultant array is : \n\n") ;
    
	for(i=0;i<=n;i++)
	{
        printf("The %d element is ",i+1);
		printf("%d\n",array[i]);
    }
	return 0;
}
