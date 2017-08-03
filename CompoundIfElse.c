//program to illutrate the concept of compound statement with if-else.
//Enter age and check wether user is eligible for voting or not.
#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter age : ");
	scanf("%d",&age);
	
	if(age<0)
	   printf("\nWrong age input.");
 	else
	    if(age>=18)
	        printf("\nYou are eligible for voting.");
	    else
	     	printf("\nYou are not eligible for voting.\nWait for %d years.",18-age);

return 0;
}
