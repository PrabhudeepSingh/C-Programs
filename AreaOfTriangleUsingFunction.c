//Program to find area of triangle using function whose three sides are given.
#include<stdio.h>
#include<math.h>

float area(float,float,float);

int main()
{
	float s1,s2,s3,ar;
	
	printf("Enter the length of first side : ");
	scanf("%f",&s1);
	printf("Enter the length of first side : ");
	scanf("%f",&s2);
	printf("Enter the length of first side : ");
	scanf("%f",&s3);
	
	ar=area(s1,s2,s3);
	
	printf("\nArea of triangle = %.2f",ar);
	
return 0;
}

float area(float x,float y,float z)
{
	float s,a;
	
	s=(x+y+z)/2;
	a=sqrt(s*(s-x)*(s-y)*(s-z));
	
return(a);
}
