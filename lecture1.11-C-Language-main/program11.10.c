#include<stdio.h>

void main(){
	
	int i, j, n, k = 1, c = 1;
	char r = 'A';
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				if(i % 2 == 0){
				
					if(j % 2 == 0){
						printf("%c ",r++);
					}
					else{
						printf("%d ",c++);
					}
				}
					else if(j % 2 == 1)
					{
						printf("%d ",c++);
					}
					else{
						printf("%c ",r++);
					}
				}
				printf("\n");
			}
		
	}
