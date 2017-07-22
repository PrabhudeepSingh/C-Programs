#include<stdio.h>

float avgno(int);

int main()
{
	int num;
	float avg;
	
	printf("Enter the limit : ");
	scanf("%d",&num);
	avg=avgno(num);
	printf("Average of the Numbers = %.2f",avg);
}

float avgno(int n)
{
	int i,sum=0;
	float avg1;
	
	for(i=1;i<=n;i++)
		sum=sum+i;
	
	avg1=sum/n;
	
return(avg1);
}
