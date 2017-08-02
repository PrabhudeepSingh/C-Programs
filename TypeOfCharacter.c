//Program to print type of character entered from keyboard
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char ch;
	
	printf("Enetr any character : ");
	ch=getche();
	
	if(islower(ch)!=0)
	     printf("\n\nIt is a lower case character.");
	
	else
	    if(isupper(ch)!=0)
	         printf("\n\nIt is a upper case character.");
	    
	    else
	        if(isdigit(ch)!=0)
	              printf("\n\nIt is a digit.");
	        
	        else
	            printf("\n\nIt is a special charcter.");
	            
return 0;
}
