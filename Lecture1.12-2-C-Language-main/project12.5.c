#include<stdio.h>
main(){
	
	int i,j,k;
	
	for(i=1;i<=7;i++){
		if (i==5) continue;
		for(k=6;k>=i;k--){
			
			printf(" ");
			
		}
		for(j=1;j<=i;j++){
			
			printf("* ");
			
		}
		printf("\n");
	}
	for(i=6;i>=1;i--){
		if (i==5) continue;
		for(k=i;k<=6;k++){
			
			printf(" ");
			
		}
		for(j=1;j<=i;j++){
			
			printf("* ");
			
		}
		printf("\n");
	}
	
}
