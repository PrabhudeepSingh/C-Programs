//Program to find sums of the square of n natural number
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	    sum+=(i*i);
	    
	printf("Sum of the series is : %d",sum);
	
return 0;
}
