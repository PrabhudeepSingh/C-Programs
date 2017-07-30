//program to find greatest using conditioal operators
#include<stdio.h>
int main()
{
	int a,b,c;

	printf("Enter first number : ");
	scanf("%d",&a);
    printf("Enter second number : ");
	scanf("%d",&b);
    printf("Enter third number : ");
	scanf("%d",&c);
	
	(a>b&&a>c)?printf("\nGreatest number : %d",a)
	:(b>a&&b>c)?printf("\nGreatest number : %d",b)
	:printf("\nGretest number is : %d",c);
	
    return 0;
}
