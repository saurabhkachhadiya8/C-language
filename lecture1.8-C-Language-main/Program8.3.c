#include<stdio.h>

main()

{
	
	int a;
	
	printf("Enter your percentage : ");
	scanf("%d" , &a);
	
	if (a > 90){
		printf("\nYour Grade is A+");
	}			
	else if(a > 80){
		printf("\nYour Grade is A");
	}
	else if(a > 70){
		printf("\nYour Grade is B+");
	}		
	else if(a > 60){
		printf("\nYour Grade is B");
	}
	else if(a > 50){
		printf("\nYour Grade is C");
	}
	else if(a > 40){
		printf("\nYour Grade is D");
	}
	else if(a > 33){
		printf("\nYour Grade is F");
	}
	else{
		printf("\nYou're Fail ");
	}

}
