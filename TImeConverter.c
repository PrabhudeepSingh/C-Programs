//Program to convert time in seconds to the time in hours,minutes,and seconds
#include<stdio.h>
int main()
{
	int s,h,m,k;
	
	printf("Enter time in seconds : ");
	scanf("%d",&s);
	
	h=s/3600;
	k=s%3600;
	m=k/30;
	s=k%60;
	
	printf("\n\n Time is %d hr: %d min: %d sec",h,m,s);

return 0;
}
