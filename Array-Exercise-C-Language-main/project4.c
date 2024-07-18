#include<stdio.h>
main(){
	
	int rows,cols,i,j,sum1=0,rowno,colno,sum2=0;
	
	printf("Enter the array's row size : ");
	scanf("%d",&rows);
	printf("Enter the array's column size : ");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter row number : ");
	scanf("%d",&rowno);
	if(rowno<rows){
        	printf("Elements of row %d : ",rowno);
			for(j = 0; j < cols; j++) {
    		    printf("%d ", arr[rowno][j]);
    		    sum1+=arr[rowno][j];
    		}
		}else{
			printf("\nEnter the available number of row : ");
			scanf("%d",&rowno);
			printf("Elements of row %d : ",rowno);
			for(j = 0; j < cols; j++) {
    		    printf("%d ", arr[rowno][j]);
    		    sum1+=arr[rowno][j];
    		}
		}
    printf("\nThe sum of row %d: %d", rowno,sum1);
    
   	printf("\n\nEnter column number : ");
	scanf("%d",&colno);
	if(colno<cols){
        	printf("Elements of column %d : ",colno);
			for(i = 0; i < rows; i++) {
    		    printf("%d ", arr[i][colno]);
    		    sum2+=arr[i][colno];
    		}
		}else{
			printf("\nEnter the available number of column : ");
			scanf("%d",&colno);
			printf("Elements of column %d : ",colno);
			for(i = 0; i < rows; i++) {
    		    printf("%d ", arr[i][colno]);
    		    sum2+=arr[i][colno];
    		}
		}
    printf("\nThe sum of column %d: %d", colno,sum2);
	
}
