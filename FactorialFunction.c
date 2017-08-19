//Program to calculate the factorial of a positive number
#include<stdio.h>

long fact(int);

int main()
{
	int n,f;
	
	printf("Enter a positive number : ");
	scanf("%d",&n);
	
	while(n<=0)
	{
		printf("\nYou have to enter a positive number.");
		printf("\nEnter the number again : ");
		scanf("%d",&n);
	}
	
	f=fact(n);
	
	printf("\n\nFactorial of %d = %d",n,f);
	
return 0;
}

long fact(int x)
{
	if(x==1)
		return(1);
	else
		return(x*fact(x-1));
}
