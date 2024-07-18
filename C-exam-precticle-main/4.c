#include<stdio.h>
main(){
	
	int a,b,c,*p,*pp;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter first number : ");
	scanf("%d",&b);
	
	c=a;a=b;b=c;
	p=a;pp=b;
	
	printf("%d  %d",p,pp);
	
}
