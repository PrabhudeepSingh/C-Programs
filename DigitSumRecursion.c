//Sum of digits of a number using recursion
#include<stdio.h>

int sum(int);

int main()
{
	int a,x;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	
	x=sum(a);
	
	printf("\nSum of digits of %d is : %d",a,x);
	
return 0;
}

int r,s;

int sum(int n)
{
	if(n)
	{
		r=n%10;
		s+=r;
		sum(n/10);
	}
	else
		return s;
}
