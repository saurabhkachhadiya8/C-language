#include<stdio.h>
main(){
	
	int a,i,b,j,c;
	
	printf("Enter array A's size : ");
	scanf("%d",&a);
	
	int arr[a];
	for(i=0;i<a;i++){
		printf("array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		printf("%d  ",arr[i]);
	}
	
	printf("\n\nEnter array B's size : ");
	scanf("%d",&b);
	
	int array[b];
	for(i=0;i<b;i++){
		printf("array[%d] : ",i);
		scanf("%d",&array[i]);
	}
	for(i=0;i<b;i++){
		printf("%d  ",array[i]);
	}
	
	c = a+b;
    int arrc[c];
    for (i=0;i<a;i++) {
        arrc[i] = arr[i];
    }
    for (j=0;j<b;j++) {
        arrc[a + j] = array[j];
    }
	
	printf("\n\nArray C is : ");
	for (i=0;i<c;i++) {
        printf("%d  ", arrc[i]);      
    }
	
}
