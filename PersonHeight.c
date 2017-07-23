#include<stdio.h>
int main()
{
	int ht;
	
	printf("Enter the height of person in cm's : ");
	scanf("%d",&ht);
	
	if(ht<=120)
	    printf("\nThe person has short height");
	    
    else
        if(ht<=150)
	        printf("\nThe person has average height");
	        
	    else
		    if(ht<=170)
	            printf("\nThe person has tall height");
	            
			else
			    printf("\nThe person has abnormal height"); 
			    
return 0;
}
