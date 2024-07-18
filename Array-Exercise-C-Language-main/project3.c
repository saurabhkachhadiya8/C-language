#include<stdio.h>
main(){
	
	int rows,cols,i,j;
	
	printf("Enter the array's row & column size : ");
	scanf("%d",&rows);
	cols=rows;
	
	int arr[rows][cols];
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}

	printf("The transpose matrix of an array\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	
}
