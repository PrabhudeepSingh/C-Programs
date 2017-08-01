//Program to calculate Compound Interest
#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci,ta;
	
	printf("Enter Principle amount : ");
	scanf("%f",&p);
    printf("Enter rate of interest : ");
	scanf("%f",&r);
	printf("Enter time period(in years) : ");
	scanf("%f",&t);
	
	ci=p*(pow((1+r/100),t)-1);
	ta=p+ci;
	
	printf("\n\nTotal Simple Interest = %.2frs.",ci);
	printf("\nTotal payable amount after %.2f years = %.2frs.",t,ta);
	
return 0;
}
