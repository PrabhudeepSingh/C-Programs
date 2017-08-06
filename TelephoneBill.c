/*Program to compute the monthly telephone bill is to be computed as folows ;
  Minimum Rs. 200 for upto 100 calls
  Plus Rs. 0.60 per call for next 50 calls
  Plus Rs. 0.50 per call for next 50 calls
  Plus Rs. 0.40 per call for any call beyond 200 calls
  Write a progarm to compute monthly bill for given number of calls*/
#include<stdio.h>
int main()
{
	int calls;
	float bill;
	
	printf("Enter number of calls : ");
	scanf("%d",&calls);
	
	if(calls<=100)
	    bill=200.00;
	
	else
	    if(calls<=150)
	       bill=200+0.60*(calls-100);
	    
	    else
	        if(calls<=200)
	           bill=200+50*0.60+0.50*(calls-150);
	           
	        else
	            bill=200+50*0.60+50*0.50+0.40*(calls-200);
	            
	printf("\nMonthly telephone bill = %.2f Rs",bill);
	
return 0;
}
