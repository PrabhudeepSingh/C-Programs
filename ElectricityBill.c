#include<stdio.h>
int main()
{
	float units,bill=1;
	
	printf("Enter number of units used : ");
	scanf("%f",&units);
	
	if(units<=100)
	   bill=units*4;
	
	else
	    if(units<=301)
	       bill=units*5;
	       
	    else
	        if(units<=500)
	           bill=units*6;
	           
	        else
	            bill=units*10;
	     
	printf("\nBill is Rs.%.2f",bill);
	       
return 0;
}
