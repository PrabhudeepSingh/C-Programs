/*program to print the following pattern :
    4567654
     34543
      232
       1*/
       
#include<stdio.h>
int main()
{
	int i,j,k,m,a,b;
	printf("\n");
	
	for(i=0;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		    printf(" ");
		    
		for(j=4-i;j<=2*4-(2*i+1);j++)
		    printf("%d",j);
		
		for(j=2*4-(2*i+2);j>=4-i;j--)
		    printf("%d",j);
		
		printf("\n");
	}
	
return 0;
}
