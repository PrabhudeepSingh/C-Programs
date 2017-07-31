//Program to demonstrate the concept of gets() and puts() functions
#include<stdio.h>
int main()
{
	char name[20],course[10];
	
	printf("Enter your name : ");
	gets(name);
	printf("Enter your course : ");
	gets(course);
	
	printf("\nData entered by you is :\n\n");
	puts(name);
	puts(course);
	
return 0;
}
