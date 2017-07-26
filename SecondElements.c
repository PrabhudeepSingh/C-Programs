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
    
    	printf("\nSecond biggest number is %d",num[n-2]);
		printf("\nSecond smallest number is %d",num[1]);
		
		return 0;
}
