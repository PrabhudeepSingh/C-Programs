#include <stdio.h>
#include <string.h>
int main ()
{
   char a[100],b[100];
   
   printf("Enter the string : ") ;
   gets(a);

   strcpy(b,a);
   strrev(b);
        
   printf("reverse of the string is : %s",b);

   return 0 ;
}
