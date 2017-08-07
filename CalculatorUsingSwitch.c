//Program to implement switch statement (Calculator using switch statement)
#include<stdio.h>
#include<conio.h>
int main()
{
  char opt;
  float num1,num2;

  printf("Enter + for addition\n");
  printf("Enter - for subtraction\n");
  printf("Enter * for multiplication\n");
  printf("Enter / for division\n");
  printf("\nEnter your choice here : ");
  opt=getche();
  
  printf("\n\nEnter 1st number : ");
  scanf("%f",&num1);
  printf("Enter 2nd number : ");
  scanf("%f",&num2);

  switch(opt)
  {
    case '+' :  printf("\n\nSum of %.2f and %.2f = %.2f\n",num1,num2,num1+num2);
                break;

    case '-' :  printf("\n\nDifference of %.2f and %.2f = %.2f\n",num1,num2,num1-num2);
                break;

    case '*' :  printf("\n\nMultiplication of %.2f and %.2f = %.2f\n",num1,num2,num1*num2);
                break;

    case '/' :  printf("\n\nDivision of %.2f and %.2f  = %.2f\n",num1,num2,num1/num2);
                break;

    default : printf("\nwrong input");

}

return 0;
}

