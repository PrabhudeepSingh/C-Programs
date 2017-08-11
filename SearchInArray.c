//Program to search element from given array
#include<stdio.h>
int main()
{
	int i,n,s,loc,t=0;
	float a[20],m;
	
	printf("Enter total number of elements of array : ");
	scanf("%d",&n);
	while(n<=0||n>20)
	{
		printf("\nError... Range of elements is 0 - 20 ");
		printf("\nEnter the number of elements again : ");
        scanf("%d",&n);	
	}
	printf("\n");	
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%f",&a[i]);
	}
	
	printf("\nEnter the element to be searched : ");
	scanf("%f",&m);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			loc=i+1;
			t=1;
			break;
		}
	}

    if(t==1)
       printf("\nElement present at Location %d",loc);
    else
       printf("\nElement not present in the given array.");

return 0;
}
