#include<stdio.h>
int main()
{
  int opt,num1,num2,res;

  printf("Enter 1 for addition\n");
  printf("Enter 2 for subtraction\n");
  printf("Enter 3 for multiplication\n");
  printf("Enter 4 for division\n");
  printf("\nEnter your choice here : ");
  scanf("%d",&opt);

  switch(opt)
  {
    case 1 :  printf("\n \nyou have chosen addition\n");
              printf("Enter 1st number : ");
              scanf("%d",&num1);
              printf("Enter 2nd number : ");
              scanf("%d",&num2);
              res=num1+num2;
              printf("\naddition = %d\n",res);
              break;

    case 2 :  printf("\n \nyou have chosen subtraction\n");
              printf("Enter 1st number : ");
              scanf("%d",&num1);
              printf("Enter 2nd number : ");
              scanf("%d",&num2);
              res=num1-num2;
              printf("\nsubtraction = %d\n",res);
              break;

    case 3 :  printf("\n \nyou have chosen multiplication\n");
              printf("Enter 1st number : ");
              scanf("%d",&num1);
              printf("Enter 2nd number : ");
              scanf("%d",&num2);
              res=num1*num2;
              printf("\nmultiplication = %d\n",res);
              break;

    case 4 :  printf("\n \nyou have chosen division\n");
              printf("Enter 1st number : ");
              scanf("%d",&num1);
              printf("Enter 2nd number : ");
              scanf("%d",&num2);
              res=num1/num2;
              printf("\ndivision = %d\n",res);
              break;

    default : printf("\nwrong input\n");

}

return 0;
}

