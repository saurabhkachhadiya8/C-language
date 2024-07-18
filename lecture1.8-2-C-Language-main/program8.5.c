#include<stdio.h>
main(){
	
    int n;

    printf("Enter any number : ");
    scanf("%d",&n);

    while (n >= 1) {
    	
    	printf("%d  ",n);
    	
    	if (n % 2 == 0) {
        	printf("This number is even.");
        	break;
    	}
    	else{
    		n -= 2;
		}
    	
        
    }
    
}
