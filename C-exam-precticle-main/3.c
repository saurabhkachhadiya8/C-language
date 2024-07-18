#include<stdio.h>
main(){
	
	int a;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	if(a%4==0&&a>=1000){
		printf("this is leap year.");
	}else{
		printf("this is not leap year.");
	}
	
}
