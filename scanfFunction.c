//Progarm to enter Values using scanf() functions
#include<stdio.h>
int main()
{
	int x; float y;
	
	printf("Enter an integer value : ");
	scanf("%d",&x);
	printf("Enter a float value : ");
	scanf("%f",&y);
	
	printf("\n\nInteger Value : %d\nFloat value : %.2f",x,y);

return 0;
}
