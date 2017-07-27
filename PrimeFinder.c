#include<stdio.h>
int main()
{
	int i,j,x;

    printf("Prime Numbers between 1 and 300 are : \n\n");
	
	for(i=1;i<=300;i++)
	{
		x=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				x=1;
				break;
			}
		}
		if(x==0)
		   printf("%d\n",i);
	}	
	
return 0;
}
