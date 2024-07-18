#include<stdio.h>
#define PI 3.14

main()
{
	
	float area;
	int r;
	
	printf("Enter the value of (r) : ");
	scanf("%d",&r);
	
	area = PI * r * r;
	
	printf("PI * 2 * 2 = %.2f",area);
	
}
