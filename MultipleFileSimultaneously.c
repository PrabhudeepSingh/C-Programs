#include<stdio.h>
int main()
{
	char ch;
	FILE *fp1,*fp2,*fp3;
	
	fp1=fopen("sikh.txt","r");
	fp2=fopen("khalsa.txt","r");
	fp3=fopen("lord.txt","r");
	
	printf("The contents of the file are : \n");
	while((ch=fgetc(fp1))!=EOF)
	  printf("%c",ch);
	
	printf("\n\nThe contents of the file are : \n");
	while((ch=fgetc(fp2))!=EOF)
	  printf("%c",ch);
	
	printf("\n\nThe contents of the file are : \n");
	while((ch=fgetc(fp3))!=EOF)
	  printf("%c",ch);
	  
	fclose(fp1);  
	fclose(fp2);
	fclose(fp3);
	
	return 0;

}
