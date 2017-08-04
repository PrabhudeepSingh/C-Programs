//Program to Add, Subtract, Multiply and Divide two numbers according to operator symbol entered using switch s
#include<stdio.h>
int main()
{
     float num1,num2,res;
     char opt;
     
     printf("Enter 1st number : ");
     scanf("%f",&num1);
     printf("Enter 2nd number : ");
     scanf("%f",&num2);
     printf("Enter the operator symbol : ");
	 scanf("%s",&opt);

  switch(opt)
  {
    case '+' :  res=num1+num2;
                printf("\naddition = %.2f\n",res);
                break;

    case '-' :  res=num1-num2;
                printf("\nsubtraction = %.2f\n",res);
                break;

    case '*' :  res=num1*num2;
                printf("\nmultiplication = %.2f\n",res);
                break;

    case '/' :  res=num1/num2;
                printf("\ndivision = %.2f\n",res);
                break;

    default :   printf("\nUnknown operator"); 
  }

return 0;
}

