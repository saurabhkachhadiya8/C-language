#include<stdio.h>
main(){
	
	int i, j, n, k;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i = n; i >= 1; i--){
		for(j = 1; j <= i; j++){
			
			printf("%d ",j);
			
		}
		for(k = i+1; k <= n; k++){
			
			printf("    ");
			
		}
		for(j = i; j >= 1; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			
			printf("%d ",j);
			
		}
		for(k = i+1; k <= n; k++){
			
			printf("    ");
			
		}
		for(j = i; j >= 1; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
/*  1 2 3 4 5 5 4 3 2 1
	1 2 3 4     4 3 2 1
	1 2 3         3 2 1
	1 2             2 1
	1                 1
	1                 1
	1 2             2 1
	1 2 3         3 2 1
	1 2 3 4     4 3 2 1
	1 2 3 4 5 5 4 3 2 1  */
	
	printf("\n");
	
	for(i = 1; i <= n; i++){
		for(k = i+1; k <= n; k++){
			
			printf("  ");
			
		}
		for(j = 1; j <= i; j++){
			
			printf("%d ",j);
			
		}
		for(j = i; j >= 1; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	for(i = n; i >= 1; i--){
		for(k = i+1; k <= n; k++){
			
			printf("  ");
			
		}
		for(j = 1; j <= i; j++){
			
			printf("%d ",j);
			
		}
		for(j = i; j >= 1; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	
/*	    1 1
      1 2 2 1
    1 2 3 3 2 1
  1 2 3 4 4 3 2 1
1 2 3 4 5 5 4 3 2 1
1 2 3 4 5 5 4 3 2 1
  1 2 3 4 4 3 2 1
    1 2 3 3 2 1
      1 2 2 1
        1 1      */
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			
			printf("%d ",j);
			
		}
		for(k = i+1; k <= n; k++){
			
			printf("    ");
			
		}
		for(j = i; j >= 1; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	for(i = n; i >= 1; i--){
		for(j = 1; j <= i; j++){
			
			printf("%d ",j);
			
		}
		for(k = i+1; k <= n; k++){
			
			printf("    ");
			
		}
		for(j = i; j >= 1; j--){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
/*	
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1  */
	
}
