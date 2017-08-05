//Program to find factorial of a given number using a loop
#include<stdio.h>
int main()
{
	 int num,fact=1,n;
	 
	 printf("Enter the number : ");
	 scanf("%d",&num);
	 
	 for(n=num;n>=1;n--)
    	 fact=fact*n;
	 
	 printf("\nFactorial of %d is %d",num,fact);
	 
return 0;
}
