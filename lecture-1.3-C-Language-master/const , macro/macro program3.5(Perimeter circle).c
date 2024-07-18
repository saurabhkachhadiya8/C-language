#include<stdio.h>
#define PI 3.14

main()
{
	
	float r;
	
	printf("Enter the value of (r) : ");
	scanf("%f",&r);
	
	float ans = PI * r;
	
	printf("2 * PI * r = %.2f",2 * ans);
	
}
