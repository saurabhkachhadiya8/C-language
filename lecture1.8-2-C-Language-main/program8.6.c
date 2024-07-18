#include<stdio.h>
main(){
	
    int i=2020,n=2040;

    printf("Enter the first number : %d",i);
    printf("\nEnter the second number : %d\n\n",n);

    while (n >= i) {
    	
    	printf("%d  ",i);
    	i += 4;
    	
    }
    
    int a,b;

    printf("\n\nEnter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
	printf("\n");

    while (b >= a) {
    	
    	printf("%d  ",a);
    	a += 4;
    	
    }
    
}
