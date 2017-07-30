//Program to swap two numbers using 3rd variable
#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the first number to swap ---> ");
	scanf("%d",&a);
	printf("Enter the second number to swap ---> ");
	scanf("%d",&b);

    c=a; a=b; b=c;
    
    printf("After swapping the two numbers \n\n First number = %d \n Second number = %d",a,b);
    
return 0;
}
