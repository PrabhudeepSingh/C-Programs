//program to print the square of 1 to n numbers using for loop
#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter the maximum limit : ");
	scanf("%d",&n);
	printf("\nNumber\tSquare\n\n");
	for(i=1;i<=n;i++)
	printf(" %3d\t%3d\n",i,i*i);
	
return 0;
}
