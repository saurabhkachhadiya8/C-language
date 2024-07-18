#include<stdio.h>

main()

{
	int choice;
	
	printf("Press 1 for January \n");
	printf("Press 2 for Febuary\n");
	printf("Press 3 for March\n");
	printf("Press 4 for April\n");
	printf("Press 5 for May\n");
	printf("Press 6 for June\n");
	printf("Press 7 for July\n");
	printf("Press 8 for August\n");
	printf("Press 9 for September\n");
	printf("Press 10 for Octomber\n");
	printf("Press 11 for November\n");
	printf("Press 12 for December\n\n");
	
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	
	switch(choice){
		
		case 1 : printf("\n\tJanuary\n");
			break;
		
		case 2 : printf("\n\tFebuary\n");
			break;
				
		case 3: printf("\n\tMarch\n");
			break;
			
		case 4: printf("\n\tApril\n");
			break;
			
		case 5: printf("\n\tMay\n");
			break;
			
		case 6: printf("\n\tJune\n");
			break;
			
		case 7: printf("\n\tJuly\n");
			break;
			
		case 8: printf("\n\tAugust\n");
			break;
			
		case 9: printf("\n\tSeptember\n");
			break;
			
		case 10: printf("\n\tOctober\n");
			break;
			
		case 11: printf("\n\tNovember\n");
			break;
			
		case 12: printf("\n\tDecember\n");
			break;
			
		default : 
			printf("\nPlease Enter The Valid Number : ");
		
	}
	
}





