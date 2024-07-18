#include<stdio.h>
main(){
	
	int a,b,i,j;
	float sum=0.0;
	
	printf("Enter the array's row size : ");
	scanf("%d",&a);
	printf("Enter the array's column size : ");
	scanf("%d",&b);
	
	int arr[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		printf("\n");
	}

	printf("Average of an Array : %.2f",sum/(a*b));
	
}

