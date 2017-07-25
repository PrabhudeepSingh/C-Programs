#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num>0)
	  printf("\nThe number is positive");
	
	  else
	      if(num<0)
	     	 printf("\nThe number is negative");
		  
		  else 
		     printf("\nThe number is zero");

	return 0;
}
