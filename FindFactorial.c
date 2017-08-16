//Program to find factorial of a number and print the result in main
#include<stdio.h>

float factorial(float);

int main()
{
	float num,fact;
	
	printf("Enter the number : ");
	scanf("%f",&num);
	
	fact=factorial(num);
	
	printf("\nFactorial is : %.2f",fact);

return 0;
}

float factorial(float n)
{
	float fact=1.0;
	int i;
	
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}

return(fact); 
}
