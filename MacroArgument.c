//Program to show the use of macros with arguments
#include<stdio.h>
#define area(x) (3.14*x*x)
int main()
{
	float a=4.5,b=2.5,y;
	
	y=area(a);
	printf("Area of Circle : %.2f\n",y);
	
	y=area(b);
	printf("Area Of Circle : %.2f",y);

return 0;
}
