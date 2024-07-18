#include<stdio.h>
main(){
	
	int a,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&a);
	
	int arr[i];
	
	for(i=0;i<a;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nNegative elements from an Array : ");
	for(i=0;i<a;i++){
		if(arr[i]<0){
			printf("%d  ",arr[i]);
		}
	}

}
