//Program to find the greatest of three numbers using nested if statement
#include<stdio.h>
int main()
{
	int a,b,c,large;
	
	printf("Enter the first value : ");
	scanf("%d",&a);
	printf("Enter the second value : ");
	scanf("%d",&b);
	printf("Enter the third value : ");
	scanf("%d",&c);
	
    if(a>b)
    {
    	if(a>c)
    	   large=a;
    	else
    	   large=c;
	}
	else
	{
		if(b>c)
		   large=b;
		else
		    large=c;
	}
    
    printf("\nLargest value is : %d",large);
    
return 0;
}
