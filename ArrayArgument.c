//Program to illustrate the concept of passing array as an argument.
#include<stdio.h>

float product(float a[],int n);

int main()
{
	float x[10],prod;
	int i,m;

	printf("Enter number of elements you want to enter : ");
	scanf("%d",&m);
	while(m<=0||m>10)
	{
		printf("\nError... Number of elements should be in the range 0 - 10");
		printf("\nEnter the number of elements again : ");
        scanf("%d",&m);	
	}
	printf("\n");
	
    for(i=0;i<m;i++)
    {
    	printf("Enter the %d element : ",i+1);
    	scanf("%f",&x[i]);
	}
	
	prod=product(x,m);
	
	printf("\nProduct of entered Elements : %.2f",prod);
	
return 0;	
}

float product(float a[10],int n)
{
	float p=1;
	for(int i=0;i<n;i++)
	p*=a[i];
		
return(p);
}
	
