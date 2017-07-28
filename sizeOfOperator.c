//Program to illustrate the concept of sizeof operator
#include<stdio.h>
int main()
{
	int a;
	float b;
	double c;
	
	printf("Size Of Integer = %d",sizeof(a));
    printf("\nSize Of Integer = %d",sizeof(int));
    printf("\nSize Of Float = %d",sizeof(b));
    printf("\nSize Of Float = %d",sizeof(float));
    printf("\nSize Of Double = %d",sizeof(c));
	printf("\nSize Of Double = %d",sizeof(double));
	
	return 0;
}
