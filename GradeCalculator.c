//Program to provide different grades to the students according to their percentage.
#include<stdio.h>
int main()
{
	int marks;
	float per;
	
	printf("Enter total marks out of 600 : ");
	scanf("%d",&marks);
	
	per=marks/6;
	
	printf("\nPercentage is : %.2f",per);
	
	if(per>=70)
	   printf("\nGrade is A.");
	
	else
	    if(per>=60)
	       printf("\nGrade is B.");
	    
	    else
	        if(per>=50)
	           printf("\nGrade is C.");
	           
	        else
	            printf("\nGrade is D.");
	            
return 0;
}
