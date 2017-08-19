//Program to reverse digits of a number using recursion.
#include<stdio.h>

int rev(int);

int main()
{
	int a,x;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	
	x=rev(a);
	
	printf("\nReverse number is : %d",x);
	
return 0;
}

int sum=0,r;

int rev(int num)
{
	
	if(num)
	{
		r=num%10;
		sum=sum*10+r;
		rev(num/10);
	}
	else
		return sum;
}
