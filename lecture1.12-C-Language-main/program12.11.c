#include<stdio.h>
main(){
	
	int i, j, n, k;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		for(k = i+1; k <= n; k++){
			
			printf("  ");
			
		}
		for(j = 1; j <= i; j++){
			
			printf("* ");
			
		}
		for(j = i-1; j >= 1; j--){
			
			printf("* ");
			
		}
		
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 1; i <= n; i++){
		for(k = i+1; k <= n; k++){
			
			printf(" ");
			
		}
		for(j = 1; j <= i; j++){
			
			printf("*");
			
		}
		for(j = i-1; j >= 1; j--){
			
			printf("*");
			
		}
		
		printf("\n");
	}
}
