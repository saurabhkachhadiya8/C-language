#include<stdio.h>
main(){
	
	int a,i;
	
	printf("Enter array size : ");
	scanf("%d",&a);
	
	int arr[a];
	printf("\nEnter array A's elements\n");
	for(i=0;i<a;i++){
		printf("array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		printf("%d  ",arr[i]);
	}
	
	int array[a];
	printf("\n\nEnter array B's elements\n");
	for(i=0;i<a;i++){
		printf("array[%d] : ",i);
		scanf("%d",&array[i]);
	}
	for(i=0;i<a;i++){
		printf("%d  ",array[i]);
	}
	
	printf("\n\nArray C is");
    for (i=0;i<a;i++) {
        printf("\n%d + %d = %d",arr[i],array[i],arr[i]+array[i]);
    }
	
}
