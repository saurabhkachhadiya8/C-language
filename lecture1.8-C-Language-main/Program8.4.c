#include<stdio.h>

main()

{
	
	int day ,a;
	
	printf("Press 1 for Sunday\n");
	printf("Press 2 for Monday\n");
	printf("Press 3 for Tuesday\n");
	printf("Press 4 for Wednesday\n");
	printf("Press 5 for Thursday\n");
	printf("Press 6 for Friday\n");
	printf("Press 7 for Saturday\n\n");


	printf("Enter your choice : ");
	scanf("%d" ,&day);
	
	switch(day){
		
		case 1 : printf("\n [Sunday : 1st day of week ]\n");
			break;
		
		case 2 : printf("\n [Monday : 2nd day of week]\n");
			break;
				
		case 3: printf("\n [Tuesday : 3rd day of week]\n");
			break;
			
		case 4: printf("\n [Wednesday : 4th day of week]\n");
			break;
			
		case 5: printf("\n [Thursday : 5th day of week]\n");
			break;
			
		case 6: printf("\n [Friday : 6th day of week]\n");
			break;
			
		case 7: printf("\n [Saturday : 7th day of week]\n");
			break;
		
		default : 
			printf("\n Enter the valid no. of week : ");	
			
	}
		
}

