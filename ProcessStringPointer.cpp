//Program to demonstrate pointer method to process a string
#include<stdio.h>
int main()
{
	char s[30]="I am a Sikh";
	char *ptr;
	ptr=s;    	//ptr is initialized to the base address of the string
	
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	
return 0;
}
