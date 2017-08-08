//program to print first n numbers of Fibonacci series
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
