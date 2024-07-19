#include<stdio.h>
main(){
	
	int i, j, n ,k;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i = n; i >= 1; i--){
		for(k = i; k >= 1; k--){
			
			printf("  ");
			
		}
		for(j = i; j <= n; j++){
			
			printf("%d ",i);
			
		}
		
		printf("\n");
	}
	
}
