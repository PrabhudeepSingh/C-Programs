#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	
	fp=fopen("sikh.txt","a");
	printf("The contents of the file are : \n\n");
	
	fprintf(fp,%s,"")
	
	while((ch=fgetc(fp))!=EOF)
	  printf("%c",ch);
	  
	fclose(fp);
	
	return 0;
}
