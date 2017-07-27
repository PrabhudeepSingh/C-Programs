//Program to find area of triangle using hero's formula
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z,s,ar;
	printf("Program to find area of triangle using hero's formula...........\n\n");
	printf("Enter length of first side : ");
	scanf("%f",&x);
    printf("Enter length of second side : ");
	scanf("%f",&y);
	printf("Enter length of second side : ");
	scanf("%f",&z);
	s=(x+y+z)/2.0;
	ar=sqrt(s*(s-x)*(s-y)*(s-z));
	printf("Area of triangle = %.2f ",ar);
	return 0;
}

