#include<stdio.h>
int main()
{
	
	int num[50],temp,n,i,j;
	printf("Enter the total number of elements : ");
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
    	scanf("%d",&num[i]);
    }

    
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(num[i]>num[j])
    		{
    			temp=num[i];
    			num[i]=num[j];
    			num[j]=temp;
			}
		}
		
	}
    
    
    printf("\n\nElements in ascending order are : \n");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",num[i]);
	}
	
	printf("\n\nElements in descing order are : \n");
    for(i=n-1;i>=0;i--)
    {    
        j++;
    	printf("%d\n",num[i]);
	}
	
	
		
		return 0;
}
