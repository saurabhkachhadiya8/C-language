#include<stdio.h>  
main(){
	
   		int n, a = 0;
		      
   		printf("Enter any number : ");
   		scanf("%d",&n);
   
   		while(n != 0){
   			
       		n = n / 10;
       		a++;
       		
   		}

   		printf("Total number of digits = %d",a);
     
}  

