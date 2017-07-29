//Program to calculate Simple Interest
#include<stdio.h>
int main()
{
	float p,r,t,si,ta;
	
	printf("Enter Principle amount : ");
	scanf("%f",&p);
    printf("Enter rate of interest : ");
	scanf("%f",&r);
	printf("Enter time period(in years) : ");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	ta=p+si;
	
	printf("\n\nTotal Simple Interest = %.2frs.",si);
	printf("\nTotal payable amount after %.2f years = %.2frs.",t,ta);
	
return 0;
}
