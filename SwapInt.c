//Program to illustrate the concept of call by value by swapping two integers values.
#include<stdio.h>

void swap(int,int);

int main()
{
	int a=10,b=20;
	printf("A = %d, B=%d Before Swapping\n",a,b);
	swap(a,b);
	printf("A = %d, B=%d After Swapping",a,b);
	
return 0;
}

void swap(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
}
