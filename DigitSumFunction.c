//Program to find Sum of digits of a positive integer Number using function.
#include<stdio.h>

int sum(int);

int main()
{
	int num;
	
	printf("Enter any positive integer Number : ");
	scanf("%d",&num);
	
	while(num<=0)
	{
		printf("\nThe Number should be positive\nEnter any positive integer number : ");
		scanf("%d",&num);
	}
	
	printf("\nSum of digit of number %d = %d",num,sum(num));
	
return 0;
}

int sum(int n)
{
	int temp,d,sum=0;
	temp=n;
	
	while(temp>0)
	{
		d=temp%10;
		temp/=10;
		sum+=d;
	}

return(sum);
}
