//Program to reverse a given number and check whether a given number is palindrome or not
#include<stdio.h>
int main()
{
	int num,rev=0,temp;
	
	printf("Enter the number to be checked : ");
	scanf("%d",&num);
	
	temp=num;
	
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
	}
	
	printf("\nReversed number is : %d",rev);
	
	if(num==rev)
	  printf("\nThe number is palindrome");
	  
	else
	  printf("\nThe number is not palindrome");
	  
	return 0;
}
