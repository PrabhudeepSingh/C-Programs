#include<stdio.h>
int main()
{
	
	float radius,area,*rad=&radius,*ar=&area;
	
	printf("Enter the radius of circle : ");
	scanf("%f",&radius);
	
	*ar=(22/7)**rad**rad;
	printf("\nArea = %f",*ar);

return 0;
}
