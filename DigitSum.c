//progarm to calculate the sum of digits of a number
#include<stdio.h>
int main()
{
	int num,r,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	while(num>0)
	{
		r=num%10;
		num=num/10;
		sum+=r;
	}
	
	printf("\nSum of digits = %d",sum);
	
return 0;
}
