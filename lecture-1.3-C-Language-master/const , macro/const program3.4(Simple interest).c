#include<stdio.h>

main()
{
	
	float p , r , t;
	
	printf("Enter the value of (p) : ");
	scanf("%f",&p);
	printf("Enter the value of (r) : ");
	scanf("%f",&r);
	printf("Enter the value of (t) : ");
	scanf("%f",&t);
	
	float ans = 1 + r * t;
	
	printf("p (1 + r * t) = %.2f",p * ans );
	
}
