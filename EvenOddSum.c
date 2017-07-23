#include<stdio.h>
int main()
{
	int SumEven,SumOdd,n,i;
	printf("Enter the limit : ");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		if((i%2)==0)
		  SumEven+=i;
		  
		else
		  SumOdd+=i;
	}
	
	printf("\nSum of Even elements is : %d",SumEven);
	printf("\nSum of Odd elements is : %d",SumOdd);
	
	return 0;
}
