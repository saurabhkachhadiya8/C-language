#include<stdio.h>
main()
{
	
	int i,n;
	
	printf("Enter the starting point : ");
	scanf("%d",&i);
	printf("Enter the ending point : ");
	scanf("%d",&n);
	
	do{
		
		printf("%d   ",i);
		i++;
		
	}while(i <= n);
	
}
