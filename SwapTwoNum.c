//Program to swap two without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the first number to swap ---> ");
	scanf("%d",&a);
	printf("Enter the second number to swap ---> ");
	scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("After swapping the two numbers \n\n First number = %d \n Second number = %d",a,b);

return 0;
}
