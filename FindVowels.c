//Progarm to find the vowels in a given string
#include<stdio.h>
int main()
{
	int i,count,n;
	char a[20];
	
	printf("Enter number of charcters in the string : ");
	scanf("%d",&n);

	while(n<=0||n>20)
	{
		printf("\nError... Range of characters is 0 - 20 ");
		printf("\nEnter the number of characters again : ");
        scanf("%d",&n);	
	}
	printf("\n");	
	
	printf("Enter the string : ");
	for(i=0;i<n;i++)
	    scanf("%c",&a[i]);
	
	count=0;
	
	for(i=0;i<n;i++)
	  if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
      count ++;
      
    printf("\nNumber of vowels in the string is : %d",count);

return 0;
}
