#include<stdio.h>
main(){
	
	int i, j, n, k;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		for(k = 1; k <= i; k++){
			
			printf("  ");
			
		}
		for(j = n; j >= i; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	
}
