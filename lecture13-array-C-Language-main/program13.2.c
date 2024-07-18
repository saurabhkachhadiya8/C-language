#include<stdio.h>
main(){
	
	int a,i;
	float sum;
	
	printf("Enter the size of array : ");
	scanf("%d",&a);
	
	int arr[i];
	
	for(i=0;i<a;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<a;i++){
		printf("%d  ",arr[i]);
		sum+=arr[i];
	}
	
	printf("\n\naverage of all array : %.2f",sum/a);

	
	
}
