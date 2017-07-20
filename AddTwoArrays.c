#include<stdio.h>
int main()
{
   int num1[4],num2[4],num3[4],i;

   printf("enter the elements for first array : \n");
   for(i=0;i<4;i++)
   {
     printf("Enter the %d element : ",i+1);
     scanf("%d",&num1[i]);
   }

   printf("\n\nenter the elements for second array : \n");
   for(i=0;i<4;i++)
   {
     printf("Enter the %d element : ",i+1);
     scanf("%d",&num2[i]);
   }

   printf("\n\nelements of third array are : \n");
   for(i=0;i<4;i++)
   {
     num3[i]=num1[i]+num2[i];
     printf("The %d element is %d\n",i+1,num3[i]); 
   } 

   return 0;
}
