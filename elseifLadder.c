//Program to display the colour according to its code which will illustrate the concept of else-if ladder
#include<stdio.h>
int main()
{
	int code;
	
	printf("Enter the code : ");
	scanf("%d",&code);
	
	if(code==1)
	   printf("\nColor is white.");
	   
	else
	    if(code==2)
	       printf("\nColor is Green.");
	       
	    else
	        if(code==3)
	           printf("\nColor is red.");
	           
	        else
	            if(code==4)
	               printf("\nColor is Yellow.");
	            
	            else
	                printf("\nInvalid color code");

return 0;
}
