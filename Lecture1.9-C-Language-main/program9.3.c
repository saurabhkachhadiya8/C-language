#include<stdio.h>
main(){
	
    int n,i = 2;

    printf("Enter any number : ");
    scanf("%d",&n);
    
	do{
		
		if (n % 2 == 0) {
			printf("%d  ",i);
        	i += 2;
    	}
    	else{
    		printf("This number is odd.");
        	break;
		}
		
	}while(n >= i);
    
}
