//Program to demonstrate the use of multiple decision statements (Greatest of three)
#include<stdio.h>
int main()
{
	int a,b,c,large;
	
	printf("Enter the first value : ");
	scanf("%d",&a);
	printf("Enter the second value : ");
	scanf("%d",&b);
	printf("Enter the third value : ");
	scanf("%d",&c);
	
	large = a;
	
	if(b>large) 
	   large=b;
	
	if(c>large) 
	   large = c;	

    printf("\nLargest value is : %d",large);
    
return 0;
}
