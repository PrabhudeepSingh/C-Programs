//program to find sum = 1^3 + 2^3 + 3^3 + ........................ + n^3
#include<stdio.h>
#include<math.h>

void sum(int);

int main()
{
	int n;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	sum(n);

return 0;
}

void sum(int num)
{
	int i,s=0;
	for(i=1;i<=num;i++)
		s=s+pow(i,3);
	printf("\nSum of the series is : %d",s);
}
