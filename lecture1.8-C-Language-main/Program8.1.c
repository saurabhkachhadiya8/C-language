#include<stdio.h>

main()

{
	
	int a,b;
	
	printf("\nEnter any number : ");
	scanf("%d", &a);
	
	(a % 2 == 0) ? printf("\nThis Number Is Even.\n") : printf("\nThis Number Is Odd.\n");
	
	printf("\nEnter any number : ");
	scanf("%d", &b);
	
	(b / 2) ? printf("\nThis Number Is Even.\n") : printf("\nThis Number Is Odd.\n");
	
}
