//Calculate tax using function
#include<stdio.h>
#include<conio.h>

float tax(float);

int main()
{
	float salary,t;
	char name[30];
	
	printf("Enter Name of the Person : ");
	gets(name);
	
	printf("Enter Salary : ");
	scanf("%f",&salary);
	
	t=tax(salary);
	
	printf("\nTax Amount for %s is Rs. %.2f",name,t);
	
return 0;
}

float tax(float sal)
{
	float ta;
	
	if(sal<=90000)
		ta=sal*12.5/100;
		
	else
		ta=sal*18.0/100;
		
return(ta);
}
