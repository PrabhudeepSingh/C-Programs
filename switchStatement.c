//program to implement Switch statement (Factorial, Prime or Fibonacci Series)  
#include<stdio.h>
int main()
{
	int opt,num,fact=1,i,ctr=0,prev=0,cur=1,next,n;
	
	printf("Enter 1 for factorial\nEnter 2 for Prime\nEnter 3 for Fibonacci Series\nEnter 4 for exit\n\nEnter your choice here : ");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1 :  printf("\nEnter the number : ");
                  scanf("%d",&num);
	
	              for(n=num;n>=1;n--)
                  fact=fact*n;
	  
                  printf("\nFactorial of %d is %d",num,fact);
                   
                  break;
                  
        case 2 :  printf("\nEnter a number : ");
	              scanf("%d",&num);
	
                  for(i=2;i<=num-1;i++)
				  {
						if(num%i==0)
						{
							ctr=1;
							break;
						}
				  }
	
			  	 if(ctr==1)
	   				printf("\nNumber is not prime.");
				 else
	                printf("\nNumber is prime.");
	                
	             break;
	                
	    case 3 : num=3;
	
			   	 printf("\nEnter the number of terms : ");
				 scanf("%d",&n);
	
				 printf("\nFibonacci Series is : \n\n");
				 printf("%d\n%d\n",prev,cur);
	
				 do
				 {
					next=prev+cur;
					printf("%d\n",next);
					prev=cur;
					cur=next;
					num+=1;
				 }while(num<=n);
				 
				 break;
				 
		case 4 : return 0;
		
		default : printf("\nWrong input");
	}
	
return 0;
}
