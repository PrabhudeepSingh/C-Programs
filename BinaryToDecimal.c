//Program to convert the binary number to decimal number
#include<stdio.h>
#include<math.h>
int main()
{
	long int a,d=0;
	int r,i=0;
	
	printf("Enter the binary number : ");
	scanf("%d",&a);
	
	while(a>0)
	{
		r=a%10;
		
		if(r!=0&&r!=1)
		   {
		       printf("\nWrong Input\nBinary number should consist only 0 and 1.");
		       return 0;
		   }
		   
		a=a/10;		
		d=d+r*pow(2,i);
		i++;
	}
	
	printf("\nThe decimal number is : %d",d);
	
return 0;
}
