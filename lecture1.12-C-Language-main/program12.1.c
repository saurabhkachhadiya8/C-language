#include<stdio.h>
main(){
	
	int i, j, n ,k;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		for(k = n; k >= i; k--){
			
			printf("  ");
			
		}
		for(j = i; j >= 1; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	
}
