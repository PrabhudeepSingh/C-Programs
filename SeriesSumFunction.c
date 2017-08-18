//Program to find the sum of the series using function
//sum= x^3 - x^5 + x^7 - x^9 ....................
#include<stdio.h>
#include<math.h>

int sum1(int,int);

int main()
{
	int x,n,i,sum;
	
	printf("Enter x : ");
	scanf("%d",&x);
	printf("Enter Number of terms : ");
	scanf("%d",&n);
	
	sum=sum1(x,n);
	
	printf("\nSum of series is : %d",sum);
	
return 0;
}

int sum1(int x,int n)
{
	int s=0,i,j=-1;
	
	for(i=1;i<=n;i++)
	{
		j=j*(-1);
		s=s+(pow(x,2*i)*j);
	}
	
return(s);
}
