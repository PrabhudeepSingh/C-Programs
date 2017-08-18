//program to calculate HCF of two numbers using functions.
#include<stdio.h>
#include<conio.h>

int hcf(int,int);

int main()
{
	int x,y,h;
	
	printf("Enter First Number : ");
	scanf("%d",&x);
	printf("Enter Second Number : ");
	scanf("%d",&y);
	
	if(x>y)
		h=hcf(x,y);
	else
		h=hcf(y,x);
	
	printf("\nHCF is : %d",h);
	
return 0;
}

int hcf(int a,int b)
{
	int rem=1;
	while(rem!=0)
	{
		rem=a%b;
		a=b;
		b=rem;
	}

return(a);
}
