//program to find Fibonacci Series using recursion
#include<stdio.h>

int fibo(int);

int main()
{
	int a,i,b,k,d;
	
	printf("Enter a number upto you have to print : ");
	scanf("%d",&a);
	printf("\n");
	
	for(i=0;i<a;i++)
	{
		k=fibo(i);
		printf("%d\n",k);
	}
	
return 0;
}

int fibo(int i)
{
	int d;
	
	if(i==0)
		return 0;
	else
	    if(i==1)
			return 1;
		else
			d=fibo(i-1)+fibo(i-2);
			return d;	
}
