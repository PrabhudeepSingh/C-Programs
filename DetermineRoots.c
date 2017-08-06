//Program to check whether roots of quadratic equation are equal, real or imaginary 
#include<stdio.h>
int main()
{
	float a,b,c,disc;
	
	printf("Enter coefficient of x^2 : ");
	scanf("%f",&a);
	printf("Enter coefficient of x : ");
	scanf("%f",&b);
	printf("Enter the constant value : ");
	scanf("%f",&c);
	
	disc=((b*b)-(4*a*c));
	
	if(disc>0)
	   printf("\nRoots are real and unequal.");
	
	else
	    if(disc==0)
	       printf("\nRoots are real and equal.");
	       
	    else
	        printf("\nRoots are imaginary.");
	        
return 0;
}
