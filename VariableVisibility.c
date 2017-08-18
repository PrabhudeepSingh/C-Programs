//Program to implement the concept of visibilty of variable x
#include<stdio.h>

int func1(void);
int func2(void);
int func3(void);

int x;

int main()
{
	x=10;
	printf("Starting Value of X : %d\n\n",x);
	printf("X = %d\n",func1());
	printf("X = %d\n",func2());
	printf("X = %d\n",func3());
	
return 0;
}

int func1(void)
{
	x+=10;
	return(x);
}

int func2(void)
{
	x=1;
	return(x);
}

int func3(void)
{
	x+=10;
	return(x);
}
