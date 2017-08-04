//Program to generate Fibonacci series of first n numbers  0,1,1,2,3,5, .............
#include<stdio.h>
int main()
{
	int prev=0,cur=1,next,n,num=3;
	
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	
	printf("\nFibonacci Series is : \n\n");
	printf("%d\n%d\n",prev,cur);
	
	do
	{
		next=prev+cur;
		printf("%d\n",next);
		prev=cur;
		cur=next;
		num+=1;
	}while(num<=n);
	
return 0;
}
