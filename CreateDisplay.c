#include<stdio.h>
int main()
{
	char ch,f_name[25];
	FILE *fp;
	
	fp=fopen("sikh.txt","r");
	printf("The contents of the file are : \n\n");
	
	while((ch=fgetc(fp))!=EOF)
	  printf("%c",ch);
	
	fclose(fp);
	return 0;
}
