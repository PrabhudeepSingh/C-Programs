//Progarm to convert temprature from degree fahrenheit to degree celsius
#include<stdio.h>
int main()
{
	float c,f;
	
	printf("Enter tempratue in fahrenheit : ");
	scanf("%f",&f);
	
	c=(5.0/9.0)*(f-32);
	
	printf("\n\nEquivalent tempratue in celcius : %f",c);
	
return 0;
}
