#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100], i, j;
    
    printf("Enter first string: ");
    scanf("%s",s1);
    
	printf("\nEnter second string: ");
    scanf("%s",s2);
    
	for(i=0; s1[i]!='\0'; ++i);
    for(j=0; s2[j]!='\0'; ++j, ++i)
    {
        s1[i]=s2[j];
    }
    
	s1[i]='\0';
    
	printf("\nAfter concatenation: %s",s1);
    
	return 0;
}
