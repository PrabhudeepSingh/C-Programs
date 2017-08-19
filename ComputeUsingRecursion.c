//Program to compute x^n using recursion
#include<stdio.h>
#include<conio.h>

int exp(int,int);

int main()
{
	int x,n,y;
	
	printf("Enter value of X : ");
	scanf("%d",&x);
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	y=exp(x,n);
	printf("\n%d",y);
	
return 0;
}

int exp(int a,int b)
{
	if(b==0)
		return(1);
	else
		return(a*exp(a,b-1));
}

