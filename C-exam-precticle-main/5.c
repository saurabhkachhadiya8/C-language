#include<stdio.h>
main(){
	
	int a,b,c;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter first number : ");
	scanf("%d",&b);
	printf("Enter first number : ");
	scanf("%d",&c);
	
	(a>=b)?(a>=c)?printf("a is max") :printf("c is max") :(b>=c)?printf("b is max") :printf("c is max");
	
}
