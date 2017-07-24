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
	
	if(num==rev)
	  printf("The number is palindrome");
	  
	else
	  printf("The number is not palindrome");
	  
	return 0;
}
