#include<stdio.h>
main(){
	
	int a,b,first,last,sum=0;
	
	printf("Enter any number : ");
	scanf("%d",&a);
	
	last = a%10;
	
	first=a;
	while(a>=10){
		a=a/10;
	}
	first=a;
	
	printf("The sum of the first and the last digit : %d",first+last);
	
}
