#include<stdio.h>
main(){
	
	int i, j, n;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			
			printf("%d ",n++);
			
		}
		
		printf("\n");
	}
	
}
