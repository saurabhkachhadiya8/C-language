#include<stdio.h>
main(){
	
	int first, last, n, sum = 0;
    
		printf("Enter any number : ");
    	scanf("%d", &n);
   
    	last = n % 10;
   
    	while(n >= 10){
        	
			n = n / 10;
			
    	}
    
		first = n;
   		sum = first + last;
   		
    	printf("Sum of first and last digit = %d", sum);
   
}
