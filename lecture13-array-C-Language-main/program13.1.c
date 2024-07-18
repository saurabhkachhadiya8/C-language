#include<stdio.h>
main(){
	
	int a,i,sum=0,sub,m=1;
	float d;
	
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
	
	sub = arr[0];
	
	for(i = 1; i<a ; i++){
		sub-=arr[i];
		
	}
	
	for(i=0;i<a;i++){
		m*=arr[i];
	}
	
	d = arr[0];
	
	for(i = 1; i<a ; i++){
		d/=arr[i];
		
	}
	
	printf("\n\nLength of an array : %d",a);
	printf("\nsum of all array : %d",sum);
	printf("\nsub of all array : %d",sub);
	printf("\nmultiplication of all array : %d",m);
	printf("\ndevision of all array : %.2f",d);
	
}
