//Program to demonstrate concept of field width with scanf() function
#include<stdio.h>
int main()
{
	int x; float y;
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Value accepted is %d\n",x);
	
	printf("\nEnter value of x : ");
	scanf("%4d",&x);
	printf("Value accepted is %d\n",x);
	
	printf("\nEnter value of y : ");
	scanf("%7f",&y);
	printf("Value accepted is %f\n",y);
	
	printf("\nEnter value of y : ");
	scanf("%4f",&y);
	printf("Value accepted is %f\n",y);
	
return 0;
}
