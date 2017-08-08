//Progarm to find the sum of even and odd numbers from first hundered positive integer numbers
#include<stdio.h>
int main()
{
	int i,sodd=0,seven=0;
	
	for(i=1;i<=10;i++)
	  if(i%2==0)
	     seven+=i;
	  else
	      sodd+=i;
	
	printf("Sum of Even numbers = %d\nSum of Odd numbers = %d",seven,sodd);
	
return 0;
}
