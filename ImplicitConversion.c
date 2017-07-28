//Program to illustrate the concept of Implicit-Conversion
#include<stdio.h>
int main()
{
	int b=20,c=45;
	float d,e,a=45;
	
	d=a/b;
	printf("%f",d);;
	
	e=c/b;
	printf("\n%f",e);
	
	return 0;
}
