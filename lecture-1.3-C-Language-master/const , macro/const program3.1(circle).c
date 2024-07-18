#include<stdio.h>

main()
{
	
	const float PI = 3.14;
	float area;
	int r;
	
	printf("Enter the value of (r) : ");
	scanf("%d",&r);
	
	area = PI * r * r;
	
	printf("PI * r * r = %.2f",area);
	
}
