//Program to swap two integers values using pointers.
#include<stdio.h>

void swap(int *,int *);

int main()
{
	int a=10,b=20;
	printf("A = %d, B=%d Before Swapping\n",a,b);
	swap(&a,&b);
	printf("A = %d, B=%d After Swapping",a,b);
	
return 0;
}

void swap(int *x, int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
