//Program to find the sum of element of array using function
#include<stdio.h>

int sum(int a[],int);

int main()
{
    int n,a[10],s,i;
    
	printf("Enter number of elements you want to enter : ");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\nError... Number of elements should be greater than 0");
		printf("\nEnter the number of elements again : ");
        scanf("%d",&n);	
	}
	printf("\n");
	
    for(i=0;i<n;i++)
    {
    	printf("Enter the %d element : ",i+1);
    	scanf("%d",&a[i]);
	}
	
	s=sum(a,n);
	
	printf("\n\nSum of array elements is : %d",s);
	
return 0;	
}

int sum(int a[],int num)
{
	int i,s=0;
	
	for(i=0;i<num;i++)
		s+=a[i];
	
	return(s);
}
