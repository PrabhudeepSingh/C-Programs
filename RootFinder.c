#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,root1,root2,disc;
  float *x=&a,*y=&b,*z=&c,*rt1=&root1,*rt2=&root2,*ds=&disc;
  
  	printf("Enter coefficient of x^2 : ");
	scanf("%f",&a);
	printf("Enter coefficient of x : ");
	scanf("%f",&b);
	printf("Enter the constant value : ");
	scanf("%f",&c);
    
    if(*x<=0)
     {
     	printf("\ncoeffcient of x^2 can not be zero");
     	return 0;
	 }
	 
	 *ds=sqrt((*y**y)-(4**x**z));
	 
	 if(*ds>0)
	 {  
	    printf("\nroots are real and distinct\n");
	    *rt1=(*y+*ds)/2**x;
   	    *rt2=(*y-*ds)/2**x;
	     
		 printf("\nFirst root is : %f",*rt1);
         printf("\nSecond root is : %f",*rt2);
     }

	 else
	    if(*ds==0)
		{
	       printf("\nroots are real and equal\n");
		   *rt1=*y/2**x;
	       *rt2=*y/2**x;
	       printf("\nFirst root is : %f",*rt1);
	       printf("\nSecond root is : %f",*rt2);
        } 
	  else
	    {
       	    printf("\nroots are imaginary\n");
	        *rt1=*y/2**x;
   	        *rt2=*ds/2**x;
	        printf("\nFirst root is : %f + i%f",*rt1,rt2);
	        printf("\nSecond root is : %f - i%f",*rt1,*rt2);
		}
		  
	  return 0;
}
