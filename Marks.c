#include<stdio.h>
int main()
{
	int rollno,marks,i;
	FILE *fp;
	fp=fopen("Marks.txt","w");
	for(i=0;i<=9;i++)
	{
		printf("Enter Roll no of %d student : ",i+1);
		scanf("%d",&rollno);
		printf("Enter Marks of %d student : ",i+1);
		scanf("%d",&marks);
		printf("\n");
		fprintf(fp,"%d","%d",rollno,marks);
	}
	fclose(fp);
	return 0;
}
