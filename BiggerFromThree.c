#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the 1st number : ");
	scanf("%d",&num1);
	printf("Enter the 2nd number : ");
	scanf("%d",&num2);	
	printf("Enter the 3rd number : ");
	scanf("%d",&num3);
	
	if(num1>num2)
	{
		if(num1>num3)
		   printf("%d is biggest",num1);
		   
		else
		   printf("%d is biggest",num3);
	}
	
	else
	    if(num2>num3)
	       printf("%d is biggest",num2);
	    
	    else
	       printf("%d is biggest",num3);
	       
	return 0;
}
