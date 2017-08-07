//program to print multiplication table of a given number
#include<stdio.h>
int main()
{
	float num;
	int i;
	
	printf("Enter th number : ");
	scanf("%f",&num);
	
	for(i=1;i<=10;i++)
	  printf("\n%.2f * %2d = %.2f",num,i,num*i);
	
return 0;
}
