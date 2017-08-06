//Program to find area of circle, rectangle and triangle using switch statement
#include<stdio.h>
int main()
{
	int a;
	float base,height,length,breadth,radius;
	
	printf("Enter your choice\n1 for Circle\n2 for Rectangle\n3 for triangle\n\nEnter here : ");
	scanf("%d",&a);
	printf("\n\n");
	
	switch(a)
	{
		case 1 : printf("Enter the radius : ");
				 scanf("%f",&radius);
				 printf("\nArea of cicle = %.2f",3.14*radius*radius);
				 break;
				 
		case 2 : printf("Enter the length : ");
		         scanf("%f",&length);
		         printf("Enter th breadth : ");
		         scanf("%f",&breadth);
		         printf("\nArea of rectangle = %.2f",length*breadth);
		         break;
		         
		case 3 : printf("Enter the base : ");
		         scanf("%f",&base);
		         printf("Enter the height : ");
		         scanf("%f",&height);
		         printf("\nArea of Triangle = %.2f",0.5*base*height);
		         break;
		         
		default : printf("Invalid choice.");
	}
	
return 0;
}
