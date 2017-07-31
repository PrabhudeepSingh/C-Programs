//Program to demonstrate the concept of putchar() function
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	printf("Enter any character from the keyboard : ");
	ch=getchar();
	
	printf("\n\nEntered character is : ");
    putchar(ch);
    
return 0;
}
