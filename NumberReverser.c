#include<stdio.h>
int main()
{

  int n,rev=0,temp;

  printf("enter a number : ");
  scanf("%d",&n);
  temp=n;

  while(temp!=0)
  {
    rev = rev*10;
    rev = rev+temp%10;
    temp = temp/10;
  }

printf("\nThe reverse of thr number is %d \n",rev);

return 0;

}

