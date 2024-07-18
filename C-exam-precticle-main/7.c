#include<stdio.h>
main(){
	
	int i,j,k;
	
	for(i=1;i<=9;i++){
		for(k=i;k<=8;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		i++;
		printf("\n");
	}
	
}
