//Program to calculate area of circle using function and pass radius as an argument
#include<stdio.h>

void area(float);

int main()
{
	float r;
	printf("Enter the radius : ");
	scanf("%f",&r);
	area(r);
	
return 0;
}

void area(float r)
{
	float ar;
	ar=3.14*r*r;
	printf("\nArea of Circle is %.2f",ar);
}
