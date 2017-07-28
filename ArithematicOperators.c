//To illustrate the use of arithematic operator
#include<stdio.h>
int main()
{
    float x,y,sum,sub,mul,div,rem;
	printf("Enter first number : ");
	scanf("%f",&x);
    printf("Enter second number : ");
	scanf("%f",&y);
    
    sum=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;
    rem=(int)x%(int)y;
    
    printf("\n\nSum            = %.2f",sum);
    printf("\n\nSubtraction    = %.2f",sub);
    printf("\n\nMultiplication = %.2f",mul);
    printf("\n\nDivision       = %.2f",div);
    printf("\n\nRemainder      = %.2f",rem);
    
    return 0;
}
