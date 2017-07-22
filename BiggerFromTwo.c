#include<stdio.h>
int main()
{
	int a,b,*x=&a,*y=&b;
	
	printf("Enter the first number : ");
	scanf("%d",&a);
    
    printf("Enter the second number : ");
	scanf("%d",&b);
	
	if(*x>*y)
	  printf("\n%d is bigger",*x);
	else
	  printf("\n%d is bigger",*y);

    return 0;
}
