//Program to demonstrate enumrated datatypes
#include<stdio.h>
int main()
{
	  enum month{jan=1,feb,mar,apr,may,june,july,aug,sept,oct,nov,dec};\
	  int i;
	  
	  printf("Month Number : \n");
	  
	  for(i=jan;i<=dec;i++)
	      printf("\n%d",i);
	  
	  return 0;
}
