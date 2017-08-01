//Program to illustrate the concept of width specifier
#include<stdio.h>
int main()
{
	int x = 729;
	float y  = 439.18;
	char str[50] ="University";
	
	printf("%3d %9.2f %14s",x,y,str);
	printf("\n% - 6d% - 9.2f% - 14s",x,y,str);
	
return 0;
}
