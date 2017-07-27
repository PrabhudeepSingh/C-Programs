//To demonstrate General structure of a C Program
#include<stdio.h>
float z;
int main()
{
	float x,y;
	printf("Enter first number : ");
	scanf("%f",&x);
    printf("Enter second number : ");
	scanf("%f",&y);
	z=x+y;
	printf("Result of addtion is %f ",z);
	return 0;
}
