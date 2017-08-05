//Program to print all numbers between 1 to 100 divisible by 5 and 3
#include<stdio.h>
int main()
{
	int i;
	
	printf("numbers divisible by 5 and 3 are :\n\n");
	
	for(i=1;i<=100;i++)
	{
		if(i%3==0 && i%5==0)
		   printf("%d\n",i);
	}
	
return 0;
}
