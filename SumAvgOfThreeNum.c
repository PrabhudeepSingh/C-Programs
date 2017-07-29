//Program to find the Sum and Average of three values
#include<stdio.h>
int main()
{
	float a,b,c,sum,avg;
	
	printf("Enter first number : ");
	scanf("%f",&a);
    printf("Enter second number : ");
	scanf("%f",&b);
    printf("Enter third number : ");
	scanf("%f",&c);
	
	sum=a+b+c;
	avg=sum/3;
	
	printf("\n\nSum = %.2f",sum);
	printf("\nAverage = %.2f",avg);
	
return 0;
}
