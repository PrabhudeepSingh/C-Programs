//Program to illustrate the use of continue statement
#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		   continue;
		printf("%d\n",i);
	}
	
return 0;
}
