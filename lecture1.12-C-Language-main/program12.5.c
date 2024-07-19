#include<stdio.h>
main(){
	
	int i, j, n, k;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i = n; i >= 1; i--){
		for(k = i; k <= n; k++){
			
			printf("  ");
			
		}
		for(j = i; j >= 1; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	
}
