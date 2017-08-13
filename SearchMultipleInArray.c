//Program to search multiple occurences of element in an array using linear search
#include<stdio.h>
#include<unistd.h>
int main()
{
	int n,i,j,f=0;
	float a[20],s;
	
	printf("Enter total number of elements of you want to enter : ");
	scanf("%d",&n);
	while(n<=0||n>20)
	{
		sleep(1);
		printf("\a\nError... Range of elements is 0 - 20 ");
		printf("\nEnter the number of elements again : ");
        scanf("%d",&n);	
	}
	printf("\n");	
	
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element of the array : ",i+1);
		scanf("%f",&a[i]);
	}
	
	printf("\nEnter the element to be searched : ",&s);
	scanf("%f",&s);
	
	printf("\nSearching...");
	sleep(1);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b");
	printf("            \a");
	
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		{
			printf("\nThe number is at position : %d",i+1);
			f=1;
		}
	}
	
	if(f==0)
	   printf("\nThe number not found...");
	   
return 0;
}
