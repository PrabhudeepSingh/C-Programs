//Sum of N numbers using recursion
#include<stdio.h>

int sum(int);

int main()
{
	int n,y;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	y=sum(n);
	
	printf("\n%d",y);
	
return 0;
}

int sum(int a)
{
	if(a==0)
		return 0;
	else
		return(a+sum(a-1));
}
