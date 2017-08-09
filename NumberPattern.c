/*Program to print the following pattern
         1
        232
       34543
      4567654*/
      
#include<stdio.h>
int main()
{
	int i,j,k,m,a,b;
	
	printf("\n");
	
	for(i=1;i<=4;i++)
	{
		a=i;
		b=2*i-2;
		
		for(j=i;j<=2*(4-1);j++)
		    printf(" ");
		    
		for(k=1;k<=i;k++)
		{
			printf("%d",a);
			a++;
		}
		
		for(m=1;m<i;m++)
		{
			printf("%d",b);
			b--;
		}
	
	    printf("\n");	
	}

return 0;
}
