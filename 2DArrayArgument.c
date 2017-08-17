//Program to illustrate the concept of passing two Dimensional Array as an Argument
#include<stdio.h>

void display(int[2][3],int, int);

int main()
{
	int a[2][3]={{11,22,33},{44,55,66}};
	display(a,2,3);
	
return 0;
}

void display(int b[2][3],int r,int c)
{
	int i,j;
	printf("The Array Is : \n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
