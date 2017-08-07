//Program to count number of charcters, vowels and word in a paragraph
#include<stdio.h>
int main()
{
	int vc=0,cc=0,wc=1;
	char ch;
	
	printf("Type the paragraph and terminate it by Enter key : \n\n");
	while((ch=getchar())!='\n')
	{
		cc++;
		
		if((ch==' ')||(ch=='\t'))
		  wc++;
		  
		if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
		vc++;
	}
	wc++;
	
	printf("\n\nCharacter count = %d\nVowel Count = %d\nWord Count = %d",cc,vc,wc);
	
return 0;
}
